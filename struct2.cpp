#include<iostream>
#include<cmath>
using namespace std;

struct point{
	int x;
	int y; 
};

struct rect{
	struct point p1;
	struct point p2;
};

int main(){
	struct rect r;
	int width, height, area;
	
	cout << "왼쪽 상단의 좌표를 입력하시오 : "<<endl;
	cin >> r.p1.x >> r.p1.y;
	cout << "오른쪽 하단의 좌표를 입력하시오 : "<<endl;
	cin >> r.p2.x >> r.p2.y;
	
	width = abs(r.p2.x - r.p1.x);
	height = abs(r.p2.y - r.p1.y);
	
	area = width * height;
	
	cout << "면적은" << area << "이고, 가로와 세로의 길이는 각각 " << width<<"과 "<<height<<"입니다."<<endl;
	
	return 0;
}
