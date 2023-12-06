#include <iostream>
using namespace std;

// 함수의 이름 - CODE 세그먼트에 적혀있는 시작번지
void f(int n)
{
	cout << "전달받은 값 - " << n << '\n';
}

int main()
{
	void(*a)(int) = f;

	cout << "함수 포인터의 크기 - " << sizeof(a) << '\n';
	cout << "함수 포인터의 타입 - " << typeid(a).name() << '\n';
}