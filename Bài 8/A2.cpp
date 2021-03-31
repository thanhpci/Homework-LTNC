#include <iostream>

using namespace std;

int main( )
{
   char a[4] = "abc";
   for (char *cp = a; (*cp) != '\0'; cp+=2) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }
   return 0;
}
