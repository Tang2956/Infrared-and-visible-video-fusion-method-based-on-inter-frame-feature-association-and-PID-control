clear all;
%%%%%视频切成图像序列
fileName = 'UoB_Viz_Tropical_2.1_i_Subclip_registered.avi'; 
%image_path=
obj = VideoReader(fileName);
numFrames = obj.NumberOfFrames;% 读取视频的帧数CurrentTime
for i = 1 : numFrames
frame = read(obj,i);% 读取每一帧
% imshow(frame);%显示每一帧
if size(frame,3)>1
    frame=rgb2gray(frame);
end
namestyle=sprintf('%06d',i);

imwrite(frame,strcat(num2str(i),'.bmp'),'bmp');% 保存每一帧
end