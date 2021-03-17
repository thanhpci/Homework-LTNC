#include<iostream>
using namespace std;

const int num = 10;

int count_even(int*, int);

int main()
{
	int a[num] = {1, 2, 3, 4, 5, 78, 90, 32, 12, 64};
	cout << count_even(a, 5) << endl;
	cout << count_even((a + 5), 5);
	return 0;
}

int count_even(int* a, int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if(a[i] % 2 == 0)
		count++;
	}
	return count;
}
