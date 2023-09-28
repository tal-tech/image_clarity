#include "ai_model.h"
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    InitModel();
    cv::Mat image =  cv::imread("./ai_model/images/testing/9696821_1565150933575_1565150917569.jpg");
    int clarity = 0;
    float confidence = 0.0f;
    int ret = DetectImageClarity(image,clarity,confidence);
    if (ret != 0) {
        cout << "Error" << endl;
    }
    cout << "clarity:" << clarity << endl;
    cout << "confidence:" << confidence << endl;
    return 0;
}