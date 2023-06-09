#include "opencv2/opencv.hpp"
#include <iostream>  
  
using namespace cv;  
using namespace std;  
  
int main(int, char**){
    Mat cloud, cloud_1, cloud1, cloud2, cloud3;
    cloud = imread("../img/cloud.jpg",IMREAD_COLOR);
    resize(cloud,cloud_1,Size(200,200));
    flip(cloud_1,cloud1,0);
    flip(cloud_1,cloud2,1);
    flip(cloud_1,cloud3,-1);
    imshow("cloud",cloud_1);
    imshow("cloud1",cloud1);
    imshow("cloud2",cloud2);
    imshow("cloud3",cloud3);

    waitKey(0);
    return 0;
}