#include<iostream>
using namespace std;

void f(int a[]) {
	cout << &a << endl;
	cout << &a[0] << endl;
}

int main() {
	int A[3] = { 25,3,2002 };
	cout << &A << endl << &A[0] << endl;
	f(A);
}
//Trong hàm main kết quả địa chỉ mảng và phần tử đầu tiên giống nhau còn các hàm bình thường thì không như vâỵ

