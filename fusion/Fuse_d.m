function F=Fuse_d(A,B,k)
% F=zeros(M,N);
% for i=1:M
%     for j=1:N
%         if abs(A(i,j))>abs(B(i,j))
%             F(i,j)=A(i,j);
%         else
%             F(i,j)=B(i,j);
%         end
%     end
% end
F=k.*A+(1-k).*B;
end

