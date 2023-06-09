#include <iostream>
#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
  
using namespace cv;  
using namespace std;  
  
int main(int, char**){
    Mat src,r_src, dst;
    src = imread("../img/cloud.jpg");
    resize(src, r_src,Size(500,500));

    Point center = Point(r_src.cols / 2, r_src.rows / 2);
    double angle = 45.0;
    double scale = 1.0;

    Mat round;
    round = getRotationMatrix2D(center, angle, scale);

    warpAffine(r_src, dst, round, r_src.size());

    imshow("src",r_src);
    imshow("dst", dst);

    waitKey(0);
    
    
    return 0;
}