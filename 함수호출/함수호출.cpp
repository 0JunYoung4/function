#include <iostream>
using namespace std;

//호출 가능한 것
// 1. 함수
// 2. 이름없는 함수 lambda
// 3. 함수를 가리키는 포인터 - function pointer(실시간에 기능을 전환할 때 사용)

class Dog {
public:
	void operator()(int n) const {
		cout << "나는 Dog인데..." << n << '\n';
	}
};

int main()
{
	Dog dog;

	dog.operator()(100);		// dog(100)이랑 같음








	dog(50);					// dog(50)만 보고는 dog가 제대로 호출 되었는지 알 수가 없다.
								// 이것은 호출가능한 타입이다.
								// function<>으로 천하통일
}