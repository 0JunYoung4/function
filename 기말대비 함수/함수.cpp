#include <iostream>
using namespace std;

// �Լ��� �̸� - CODE ���׸�Ʈ�� �����ִ� ���۹���
void f(int n)
{
	cout << "���޹��� �� - " << n << '\n';
}

int main()
{
	void(*a)(int) = f;

	cout << "�Լ� �������� ũ�� - " << sizeof(a) << '\n';
	cout << "�Լ� �������� Ÿ�� - " << typeid(a).name() << '\n';
}