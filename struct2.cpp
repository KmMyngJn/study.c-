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
	
	cout << "���� ����� ��ǥ�� �Է��Ͻÿ� : "<<endl;
	cin >> r.p1.x >> r.p1.y;
	cout << "������ �ϴ��� ��ǥ�� �Է��Ͻÿ� : "<<endl;
	cin >> r.p2.x >> r.p2.y;
	
	width = abs(r.p2.x - r.p1.x);
	height = abs(r.p2.y - r.p1.y);
	
	area = width * height;
	
	cout << "������" << area << "�̰�, ���ο� ������ ���̴� ���� " << width<<"�� "<<height<<"�Դϴ�."<<endl;
	
	return 0;
}
