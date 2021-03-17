#include<iostream>
using namespace std;

char* weird_string() {
   char c[] = {'c'}; //“123345”;
   return c;
}

int main()
{
	weird_string();
	return 0;           //man hinh khong in ra ket qua gi
}
