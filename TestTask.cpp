#include <opencv2/opencv.hpp>
#include <opencv2/features2d.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main() {
    string image_path = "D:/Programs/test_task/04.jpg";
    Mat image = imread(image_path, cv::IMREAD_GRAYSCALE);

    if (image.empty()) {
        std::cout << "Failed load image\n";
        return -1;
    }

    Ptr<FastFeatureDetector> detector = FastFeatureDetector::create();

    vector<KeyPoint> keypoints;
    detector->detect(image, keypoints);

    Mat img_keypoints;
    drawKeypoints(image, keypoints, img_keypoints);

    imshow("Keypoints", img_keypoints);
    waitKey(0);

    return 0;
}