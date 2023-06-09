#include "opencv2/opencv.hpp"
#include <iostream>  
  
using namespace cv;  
using namespace std;  
  
int main(int, char**){
    Mat img, img1, imgd, imgd1;
    img = imread("../img/family.png",IMREAD_COLOR);
    resize(img,img1,Size(700,700)); 
    pyrUp(img1,imgd,Size(img1.cols *2,img1.rows *2));
    pyrDown(img1,imgd1,Size(img1.cols/2, img1.rows/2));
    imshow("img",img1);
    imshow("imgd", imgd);
    imshow("imgd1",imgd1);
    waitKey(0);
    return 0;
}