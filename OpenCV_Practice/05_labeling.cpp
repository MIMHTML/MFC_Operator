#include <opencv2/opencv.hpp>
#include <iostream>


int main()
{

    // 0
    cv::Mat image = cv::imread("puppy.png", cv::IMREAD_COLOR);
    cv::imshow("result", image);
    cv::waitKey(0);

    cv::Mat blurred;
    cv::GaussianBlur(image, blurred, cv::Size(5, 5), 0);

    cv::Mat gray;
    cv::cvtColor(blurred, gray, cv::COLOR_BGR2GRAY);
    cv::imshow("result", gray);
    cv::waitKey(0);

    cv::Mat edge;
    cv::Canny(gray, edge, 50, 150);
    cv::imshow("result", edge);
    cv::waitKey(0);


    // 1
    cv::bitwise_not(edge, edge);
    cv::imshow("result", edge);
    cv::waitKey(0);


    std::vector<std::vector<cv::Point>> contours;
    cv::findContours(edge.clone(), contours, cv::RETR_LIST,
        cv::CHAIN_APPROX_SIMPLE);
    cv::drawContours(edge, contours, -1, cv::Scalar(0, 0, 0), 1);
    cv::imshow("result", edge); 
    cv::waitKey(0);


    // 2
    cv::Mat labels, stats, centroids;
    int nlabels = cv::connectedComponentsWithStats(edge,
        labels, stats, centroids);


    for (int i = 0; i < nlabels; i++)
    {

        if (i < 2)    continue;

        int area = stats.at<int>(i, cv::CC_STAT_AREA);
        int center_x = centroids.at<double>(i, 0);
        int center_y = centroids.at<double>(i, 1);
        int left = stats.at<int>(i, cv::CC_STAT_LEFT);
        int top = stats.at<int>(i, cv::CC_STAT_TOP);
        int width = stats.at<int>(i, cv::CC_STAT_WIDTH);
        int height = stats.at<int>(i, cv::CC_STAT_HEIGHT);


        if (area > 50) {
            cv::rectangle(image, cv::Point(left, top),
                cv::Point(left + width, top + height), cv::Scalar(0, 0, 255), 1);
            cv::circle(image, cv::Point(center_x, center_y), 5, (255, 0, 0), 1);
            cv::putText(image, std::to_string(i), cv::Point(left + 20, top + 20),
                cv::FONT_HERSHEY_SIMPLEX, 1, cv::Scalar(255, 0, 0), 2);
        }
    }
    cv::imshow("result", image);
    cv::waitKey(0);
}