#pragma once
#include <opencv2.4.10_all.h>
using namespace cv;

void drawBox(cv::Mat& image, Rect box, cv::Scalar color = Scalar(255,0,0), int thick=1); 

void drawPoints(cv::Mat& image, std::vector<cv::Point2f> points,cv::Scalar color=Scalar(255,255,0));

cv::Mat createMask(const cv::Mat& image, CvRect box);

float median(std::vector<float> v);

std::vector<int> index_shuffle(int begin,int end);

