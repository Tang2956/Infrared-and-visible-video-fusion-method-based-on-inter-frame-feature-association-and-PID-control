function [A1,A2,A3,A4,A22,A33,A44] = Fenk(Img,M,N)
T=zeros(2,2);
A1=zeros(M/2,N/2);
A2=zeros(M/2,N/2);
A3=zeros(M/2,N/2);
A4=zeros(M/2,N/2);
A22=zeros(M/2,N/2);
A33=zeros(M/2,N/2);
A44=zeros(M/2,N/2);
for i=1:M/2
    for j=1:N/2
        T=Img(2*i-1:2*i,2*j-1:2*j);
        A1(i,j)=T(1,1);
        if T(1,2)>T(1,1)||T(1,2)==T(1,1)
            A2(i,j)=T(1,2)-T(1,1);
            A22(i,j)=0;
        else
            A22(i,j)=T(1,1)-T(1,2);
            A2(i,j)=0;
        end
        if T(2,1)>T(1,1)||T(2,1)==T(1,1)
            A3(i,j)=T(2,1)-T(1,1);
            A33(i,j)=0;
        else
            A33(i,j)=T(1,1)-T(2,1);
            A3(i,j)=0;
        end
       if T(2,2)>T(1,1)||T(2,2)==T(1,1)
            A4(i,j)=T(2,2)-T(1,1);
            A44(i,j)=0;
       else
           A44(i,j)=T(1,1)-T(2,2);
           A4(i,j)=0;
       end
    end
end
end


