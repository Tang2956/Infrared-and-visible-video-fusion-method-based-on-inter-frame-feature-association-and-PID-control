function [F] = Inverse_Fenk(C1,C2,C3,C4,C22,C33,C44,M,N)
A=C1;
B=C1+C2-C22;
C=C1+C3-C33;
D=C1+C4-C44;
F=zeros(M,N);
T=zeros(2,2);
for i=1:M/2
    for j=1:N/2
        T(1,1)=A(i,j);
        T(1,2)=B(i,j);
        T(2,1)=C(i,j);
        T(2,2)=D(i,j);
        F(2*i-1:2*i,2*j-1:2*j)=T;
    end
end
end

