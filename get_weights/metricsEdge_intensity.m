function res = metricsEdge_intensity(fused)
        w = fspecial('sobel'); 
        [r c k] = size(fused); 
        g=zeros(r,c,k);
        gx = imfilter(fused,w,'replicate'); 
        gy = imfilter(fused,w','replicate'); 
        for m = 1 : r 
            for n = 1 : c 
                for q = 1 : k 
                    g(m,n,q) = sqrt(gx(m,n,q)*gx(m,n,q) + gy(m,n,q)*gy(m,n,q)); 
                end 
            end 
        end 
        res = mean(mean(mean(g))); 
end