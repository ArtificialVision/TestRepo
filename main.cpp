#include <iostream>
#include <opencv/cv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <ctime>
#include <time.h>

using namespace std;
using namespace cv;

int main()
{
	time_t t_start,t_end;
	t_start = time(0);

	//time_t time;
	//time = clock();

	Mat image = imread("lena.png");
	imshow("InputImage",image);
	waitKey(0);

	//time = clock() - time;

	t_end = time(0);
	cout << "Ctime : " << float (difftime(t_end,t_start)) << "sec" << endl;

	//cout << "Time : " <<  (float(time) / CLOCKS_PER_SEC) << "sec" << endl;

	return 0;
}

