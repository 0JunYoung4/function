#include <iostream>
using namespace std;

//ȣ�� ������ ��
// 1. �Լ�
// 2. �̸����� �Լ� lambda
// 3. �Լ��� ����Ű�� ������ - function pointer(�ǽð��� ����� ��ȯ�� �� ���)

class Dog {
public:
	void operator()(int n) const {
		cout << "���� Dog�ε�..." << n << '\n';
	}
};

int main()
{
	Dog dog;

	dog.operator()(100);		// dog(100)�̶� ����








	dog(50);					// dog(50)�� ����� dog�� ����� ȣ�� �Ǿ����� �� ���� ����.
								// �̰��� ȣ�Ⱑ���� Ÿ���̴�.
								// function<>���� õ������
}