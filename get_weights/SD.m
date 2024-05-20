function img_var = SD(fused)
%     if size(fused,3) > 1 
%         fused=rgb2gray(fused);  
%     end
    [r, c] = size(fused); 
    % Mean value 
    img_mean = mean(mean(fused)); 
    % Variance 
    img_var = sqrt(sum(sum((fused - img_mean).^2)) / (r * c ));
end