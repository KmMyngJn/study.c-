# c++ 7월 5일 수업
## 구조체 등을 수업하였습니다.

---

1 구조체란?

  서로 다른 타입의 데이터들의 모임. 한가지에 여러 특성이 필요한 경우 사용.  
  **새로운 자료형이 됨.**  
  구조체의 이름을 주로 tag라고 하며, 각각의 데이터들을 memmber라고 한다.  

    //선언 예시

    #include <cstdio>	//c++에서 c라이브러리인 stdio.h와 string.h를 사용하기 위해, 다음과 같이 기입한다.
    #include <cstring>
    struct account{

	char num[20];
	int money;
	char owner[20];
	......
	data_type data_name;

    }a0;	//여기에서 변수를 선언할 수도 있다.	

    int main(){

    	struct account a;	//a는 이제 account의 형태를 가진다.

    	struct account a1 = {"125-54", 53000, "KMJ", ...};	//다음과 같이 초기화 한다. a0의 위치에서도 가능.

	strcpy(a.num, "545-87");	//다음과 같이 멤버에 직접 참조할 수 있다.
				//단, strcpy는 문자열 복사 함수로, c라이브러리 중 string.h가 필요하다.

	a.money = 5215500;

	scanf("%s", a.owner);

    }
  
  다중으로 구조체를 종속시킬 수도 있다.   

    //전략

    struct owner{
	char name[20];
	int age;
	int level;
    };

    struct account{
	char num[20];
	int money;
	struct owner o;	//다음과 같이 멤버를 구조체로 할 수 있다.
    }ac;

    int main(){

    	ac.o.age = 20;	//account형인 ac의 멤버인 o의 멤버인 age의 값을 참조한다.

    }
  
  
---
  
2 구조체의 장단점  
  
**장점**  
  
-연관된 변수들을 하나의 자료형으로 묶어, 개개별의 변수에 대한 불필요한 선언반복을 줄임.  
-가독성이 뛰어남.

**단점**

-구조체 변수를 할당하고 초기화하여, 가장 큰 자료형을 기준으로 할당을 시작하는데,
	**이 때 메모리누수가 발생할 수 있다는 점을 잘 생각해야함.**
-멤버의 순서를 바꾸어 메모리를 관리할 수 있다.

---

3 구조체와 포인터

  일반적인 포인터와 비슷하게 사용. 다음과 같은 형태로 사용한다.  
  
  
    //전략

    struct owner{
	char name[20];
	int age;
	int level;
    };

    struct account{
	char num[20];
	int money;
	struct owner *o;	//다른 구조체의 포인터도 멤버로 가질 수 있다.
    };

    int main(){

	struct account *a;
	struct owner o1 = {"chief",42,2};

	struct account ac = {"548-86",45200}	//다음의 ac에서는 *o멤버가 필요하다.
	ac.o = &o1;	//다음과 같이 가져올 수 있다.

	a = &ac;		//일반적인 방법으로 포인터를 초기화한다.

	cout << ac.num <<endl;
	cout << (*a).num <<endl;
	cout << a->num <<endl;	//이상 세가지는 같은 결과 값을 도출한다.

    //	*a.num은 연산자 우선 순위에 의해 *(a.num)을 의미하므로 주의하여야 한다.

---

4 구조체와 함수

**구조체를 함수의 인수로 전달하는 경우**  
	구조체의 복사본이 함수로 전달되며, 구조체의 크기가 클 수록 시간과 메모리가 많이 소요된다.

**구조체의 포인터를 인수로 전달하는 경우**  
	구조체의 주소값이 함수로 전달되며, 시간과 메모리를 절약할 수 있다.  
	단, 원본 훼손의 가능성이 있으므로, 다음과 같이 const를 사용해 실제 값을 고정한다.

    	int func(struct tag const *t){}
	
**구조체가 함수의 반환값으로 넘길 경우**  
	일반적인 함수처럼 반환값의 형을 구조체로 표시해야 한다.  
	func의 반환값이 구조체 ox일 경우, 다음과 같이 사용한다.  


	struct ox func(void){

	struct ox temp;
	
	//중략

	return temp;

    }



---

5 typedef

  말 그대로 새 자료형(type)을 정의(define)함.
  구 자료형을 새로이 만드는 일



    //	typedef old_type new_type;	//다음과 같은 형태이다.

	typedef unsigned int uint;	//uint == unsigned int

	struct x{
		int a;
		int b;
	};

	type struct x X;	//X==struct x

위의 struct x는 다음과 같이 typedef할 수 있다.

	typedef struct{
		int a;
		int b;
	} X;

---
	
## Study Log

	예제 1
	2018-07-05 struct1.cpp

	예제 2(직사각형의 반대되는 두 꼭짓점으로 직사각형의 넓이 구하기)
	2018-07-05 struct2.cpp

	개인작1(두 점을 지나는 일차방정식 구하기)
	2018-07-05 temp.cpp

