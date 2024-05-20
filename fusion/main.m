close all
clear all
clc
% VIS
fileName_vis = 'UoB_Viz_Tropical_2.1_i_Subclip_registered.avi'; 
% folderPath_vis = './VIS';
obj_vis = VideoReader(fileName_vis);
numFrames_vis = obj_vis.NumberOfFrames;
VIS = cell(1,numFrames_vis);
for i = 1 : numFrames_vis
frame = read(obj_vis,i);% 
if size(frame,3)>1
    frame=rgb2gray(frame);
end
VIS{i} = frame;
% fileName_vis = sprintf('%d.bmp', i);
% fullPath_vis = fullfile(folderPath_vis, fileName_vis);
% imwrite(frame, fullPath_vis);
end
% IR
fileName_ir = 'UoB_IR_Tropical_2.1_i_Subclip_registered.avi'; 
% folderPath_ir = './IR';
obj_ir = VideoReader(fileName_ir);
numFrames_ir = obj_ir.NumberOfFrames;
IR = cell(1,numFrames_ir);
for i = 1 : numFrames_ir
frame = read(obj_ir,i);% 
if size(frame,3)>1
    frame=rgb2gray(frame);
end
% fileName_ir = sprintf('%d.bmp', i);
% fullPath_ir = fullfile(folderPath_ir, fileName_ir);
% imwrite(frame, fullPath_ir);
IR{i} = frame;
end
videoFile = 'outputVideo.avi';
vWriter = VideoWriter(videoFile);
vWriter.FrameRate = 30; % 每秒30帧
open(vWriter);
Fus = cell(1,numFrames_ir);
interval = round(numFrames_ir/5);
x = zeros(1,numFrames_ir);
We = load('Weights.txt');
x(1:interval)=We(1,2);
x(interval+1:2*interval)=We(2,2);
x(2*interval+1:3*interval)=We(3,2);
x(3*interval+1:4*interval)=We(4,2);
x(4*interval+1:5*interval)=We(5,2);
% x(9*interval+1:11*interval)=We(6,2);
% x(11*interval+1:13*interval)=We(7,2);
% x(13*interval+1:15*interval)=We(8,2);
% x(15*interval+1:17*interval)=We(9,2);
% x(17*interval+1:19*interval)=We(10,2);
% x(19*interval+1:21*interval)=We(11,2);
% x(21*interval+1:23*interval)=We(12,2);
% x(23*interval+1:25*interval)=We(13,2);
% x(25*interval+1:27*interval)=We(14,2);
% x(27*interval+1:29*interval)=We(15,2);
% x(29*interval+1:31*interval)=We(16,2);
% x(31*interval+1:end)=We(17,2);
% Fuse
tic
for i = 1:10
    if i == 1
        vis1 = VIS{i};
        vis2 = VIS{i};
        ir1 = IR{i};
        ir2 = IR{i};
    else
        vis1 = VIS{i-1};
        vis2 = VIS{i};
        ir1 = IR{i-1};
        ir2 = IR{i};
    end
   
    F = fused(ir1,ir2,x(i),vis1,vis2);
    Fus{i} = F;
    writeVideo(vWriter,  Fus{i});
end
 toc
% 创建一个视频文件，设置视频的属性，例如分辨率和帧率
close(vWriter);
        
