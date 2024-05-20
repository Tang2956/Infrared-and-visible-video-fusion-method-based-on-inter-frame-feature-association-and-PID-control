function y=fused(IR1,IR2,x,VIS1,VIS2)
% 图像灰度化
ir_1 = IR1;
ir_2 = IR2;
vis_1 = VIS1;
vis_2 = VIS2;
[row1 ,col1] = size(ir_1);

M=row1;
N=col1;

% 提取局部差分特征
[A1,A2,A3,A4,A22,A33,A44] = Fenk(ir_1,M,N);
[B1,B2,B3,B4,B22,B33,B44] = Fenk(ir_2,M,N);
[C1,C2,C3,C4,C22,C33,C44] = Fenk(vis_1,M,N);
[D1,D2,D3,D4,D22,D33,D44] = Fenk(vis_2,M,N);

% 提取关联细节特征
P2=Fea(A2,B2,M,N);
P3=Fea(A3,B3,M,N);
P4=Fea(A4,B4,M,N);
P22=Fea(A22,B22,M,N);
P33=Fea(A33,B33,M,N);
P44=Fea(A44,B44,M,N);
Q2=Fea(C2,D2,M,N);
Q3=Fea(C3,D3,M,N);
Q4=Fea(C4,D4,M,N);
Q22=Fea(C22,D22,M,N);
Q33=Fea(C33,D33,M,N);
Q44=Fea(C44,D44,M,N);

% 红外显著性目标提取
Ig=double(ir_2);
I1=log(Ig+1);%取对数
FI=fft2(I1);%傅里叶变换
n1=floor(M/2);
n2=floor(N/2);
D=zeros(M,N);
H=zeros(M,N);
% k=-200;
for i=1:M
   for j=1:N      
       D(i,j)=((i-n1).^2+(j-n2).^2);
% H(i,j)=(rH-rL).*(exp(c*(-D(i,j)./(d0^2))))+rL; %高斯同态滤波              
       H(i,j)=85./(1+exp(1./(D(i,j))));
  end
end
I2=ifft2(H.*FI);
I33=real(exp(I2));
I33=I33./(10^144);
I3=zeros(M,N);
ma=max(I33(:));
mi=min(I33(:));
for i=1:M
    for j=1:N
        I3(i,j)=round(255.*(I33(i,j)-mi)./(ma-mi));
    end
end
avg=mean(mean(I3(:)));
Ig(I3(:)<avg)=0;
% 计算边缘强度
E_ir=metricsEdge_intensity(double(ir_2));
E_vis=metricsEdge_intensity(double(vis_2));
We=0.5.*E_ir./(E_ir+E_vis);
% 细节层融合
FPQ2=Fuse_d(P2,Q2,We);
PPQ3=Fuse_d(P3,Q3,We);
FPQ4=Fuse_d(P4,Q4,We);
FPQ22=Fuse_d(P22,Q22,We);
FPQ33=Fuse_d(P33,Q33,We);
FPQ44=Fuse_d(P44,Q44,We);

% 基层融合
SD_B=SD(double(ir_2));
SD_D=SD(double(vis_2));
% Eta=exp(((SD_B-SD_D)./SD_D).^(abs(SD_B-SD_D)./(SD_B-SD_D)));

Eta=exp(((SD_B-SD_D)./(SD_B+SD_D)).^(abs(SD_B-SD_D)./(SD_B-SD_D)));

FBD1=B1.*(x+0.5.*Eta)+D1.*(x+0.5);
F=Inverse_Fenk(FBD1,FPQ2,PPQ3,FPQ4,FPQ22,FPQ33,FPQ44,M,N);
y=uint8(F+Ig);

end