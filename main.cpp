#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    cv::Mat image = cv::Mat::zeros(300, 300, CV_8UC3);
    cv::putText(image, "Hello, OpenCV", cv::Point(50, 150), cv::FONT_HERSHEY_SIMPLEX, 1, cv::Scalar(255, 255, 255), 2);
    cv::imshow("Test", image);
    cv::waitKey(0);
    return 0;
}
