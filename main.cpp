#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>

#include <iostream>

using namespace std;
using namespace cv;

int main(int argc, char* argv[])
{
    Mat image = imread(argv[1]);
    Mat image_hsv = imread(argv[1]);
    Mat image_gray = imread(argv[1]);
    Mat image_bin = imread(argv[1]);
    Mat image_for_draw = imread(argv[1]);

    cvtColor(image_hsv, image_hsv, COLOR_BGR2HSV);
    cvtColor(image_gray, image_gray, COLOR_BGR2GRAY);
    cvtColor(image_bin, image_bin, COLOR_BGR2GRAY);
    threshold(image_bin, image_bin, 127, 255, THRESH_BINARY);
    circle(image_for_draw, Point(175,180), 25, Scalar(255, 0, 0), 2);
    circle(image_for_draw, Point(270,175), 25, Scalar(255, 0, 0), 2);
    rectangle(image_for_draw, Point(175,240), Point(280,280), Scalar(0, 0, 255), 2);

    namedWindow("Original image");
    namedWindow("HSV image");
    namedWindow("GRAY image");
    namedWindow("BINARY image");
    namedWindow("DRAW image");

    imshow("Original image", image);
    imshow("HSV image", image_hsv);
    imshow("GRAY image", image_gray);
    imshow("BINARY image", image_bin);
    imshow("DRAW image", image_for_draw);

    waitKey(0);

    return 0;
}
