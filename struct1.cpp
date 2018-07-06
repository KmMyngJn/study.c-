#include<cstdio>
#include<cstring>

struct info{
	int age;
	char name[20];
	char address[20];
};

int main(){
	struct info i;
	i.age=20;
	strcpy(i.name,"KMJ");
	scanf("%s", i.address);
	printf(" age : %d\n name : %s\n address : %s\n",i.age, i.name, i.address);
	return 0;
}
