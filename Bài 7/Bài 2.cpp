#include<iostream>
using namespace std;

const int num = 10;

void size_of(int *a)
{
	cout << sizeof(a);
}

int main()
{
	int a[num] = {1, 2, 3, 4, 5};
	cout << sizeof(a) << endl;
	size_of(a);

	return 0;
}
