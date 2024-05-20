function OUT=Fea(A,B,M,N)
Ba=mean(mean(A(:)));
Da=mean(mean(B(:)));
BB=zeros(M/2,N/2);
DD=zeros(M/2,N/2);
OUT=zeros(M/2,N/2);
for i=1:M/2
    for j=1:N/2
        if A(i,j)<Ba
            BB(i,j)=0;
        else
            BB(i,j)=1;
        end
    end
end

for i=1:M/2
    for j=1:N/2
        if B(i,j)<Da
            DD(i,j)=0;
        else
            DD(i,j)=1;
        end
    end
end
E=or(BB,DD);
EE=E-DD;
for i=1:M/2
    for j=1:N/2
        if EE(i,j)==0
           OUT(i,j)=B(i,j);
        else
            OUT(i,j)=B(i,j)+0.1*A(i,j);
        end
    end
end

end

