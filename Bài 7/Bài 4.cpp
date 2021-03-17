#include<iostream>
using namespace std;

const int num = 10;

int binary_search(int *, const int&, const int&);

int main()
{
	int a[num] = {2, 5, 7, 9, 12, 16, 20, 27, 31, 35};
	int k;
	cin >> k;
	cout << binary_search(a, num, k);
	return 0;
}

int binary_search(int *a, const int& num, const int& k)
{
	int first = 0, last = num - 1;
	int position = -1;
	bool found = false;
	while(!found && first <= last)
	{
		int middle = (first + last)/2;
		if(*(a+middle) == k)
		{
			found = true;
			position = middle;
		}
		else if(*(a+middle) > k)
		{
			last = middle - 1;
		}
		else first = middle + 1;
	}
	return position;
}
