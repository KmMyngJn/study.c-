#include<iostream>
#include<cmath>
using namespace std;

struct point{
	float x;
	float y;
};

struct line{
	struct point p1;
	struct point p2;
};

int main(){
	struct line s;
	float a, b;
	
	cout << "한 점의 좌표를 입력하시오 : "<<endl;
	cin >> s.p1.x >> s.p1.y;
	cout << "다른 한 점의 좌표를 입력하시오 : "<<endl;
	cin >> s.p2.x >> s.p2.y;
	
	a = (s.p2.y - s.p1.y) / (s.p2.x - s.p1.x) ;
	b = s.p2.y - (a * s.p2.x);
	
	cout << "y = ";
	if (a==1)
		cout << "x ";
	else
		cout << a << "x ";
	
	if(b>0)
		cout << "+" << b<< endl;
	else if(b<0)
		cout << b<< endl;
	
	return 0;
}
