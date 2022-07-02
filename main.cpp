#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

using namespace std;
using namespace cv;

int main() {

    string path = "C:\\Users\\davdk\\Desktop\\OpenCV C++\\Chapter 3\\Resources\\test.png";
    Mat img = imread(path);
    Mat imgResize, imgCrop;

    //      Writing The Resolution     //
    cout << img.size() << endl;
    //      Resizing The Image         //
    resize(img,imgResize,Size(), 0.5, 0.5);
    //      Cropping The Image         //
    Rect roi(100,100,300,250);
    imgCrop = img(roi);

    imshow("Image", img);
    imshow("Image Resize", imgResize);
    imshow("Image Crop", imgCrop);
    waitKey(0);

}
