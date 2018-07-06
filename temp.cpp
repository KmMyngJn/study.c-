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
	
	cout << "�� ���� ��ǥ�� �Է��Ͻÿ� : "<<endl;
	cin >> s.p1.x >> s.p1.y;
	cout << "�ٸ� �� ���� ��ǥ�� �Է��Ͻÿ� : "<<endl;
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
