#include <iostream>
using namespace std;

//���ݷ�Χ������
int test(int n)
{
	int a = 0;
	while (n > 0)
	{
		a += n % 10;
		n = n / 10;
	}

	while (a > 9)
	{
		a = test(a);
	}

	return a;
	
}

int main()
{
	int n;
	while (cin >> n)
	{
		int tmp = test(n);
		cout << tmp << endl;
	}

	system("pause");
	return 0;
}