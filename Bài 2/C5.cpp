#include <iostream>
using namespace std;

void printNumber (int n);
void printAfterHundredNumberThatIsntOne (int n);

const int maxNumberOfDigits = 9;
int main()
{
    long long n;
    cin >> n;
    if (n == 0) cout << 0;
    else
    {
        if (n < 0)
        {
            cout << "negative ";
            n = -n;
        }
        int digit[maxNumberOfDigits];
        int numberOfDigits = 0;
        while (n != 0)
        {
            digit[numberOfDigits] = n % 10;
            n /= 10;
            numberOfDigits++;
        }
        for (int i = numberOfDigits; i >= 1; i--)
        {
            switch (i)
            {
                case 3:
                case 6:
                case 9:
                    printNumber(digit[i-1]);
                    if (digit[i-1] != 0)
                    {
                        cout << "hundred ";
                    }
                    if (digit[i-2] != 0 || digit[i-3] != 0)
                    {
                        cout << "and ";
                    }
                    break;
                case 2:
                case 5:
                case 8:
                    if (digit[i-1] != 1)
                    {
                        printAfterHundredNumberThatIsntOne(digit[i-1]);
                    }
                    else
                    {
                        switch (digit[i-2])
                        {
                            case 0: cout << "ten "; break;
                            case 1: cout << "eleven "; break;
                            case 2: cout << "twelve "; break;
                            case 3: cout << "thirteen "; break;
                            case 4: cout << "fourteen "; break;
                            case 5: cout << "fifteen "; break;
                            case 6: cout << "sixteen "; break;
                            case 7: cout << "seventeen "; break;
                            case 8: cout << "eighteen "; break;
                            case 9: cout << "nineteen "; break;
                        }
                    }
                    break;
                case 1:
                case 4:
                case 7:
                    if (digit[i] != 1)
                    {
                        printNumber(digit[i-1]);
                    }
                    if (i == 4)
                    {
                        cout << "thousand ";
                    }
                    if (i == 7)
                    {
                        cout << "million ";
                    }
                    break;
            }
        }
    }
    return 0;
}

void printNumber (int n)
{
    switch (n)
    {
        case 1: cout << "one "; break;
        case 2: cout << "two "; break;
        case 3: cout << "three "; break;
        case 4: cout << "four "; break;
        case 5: cout << "five "; break;
        case 6: cout << "six "; break;
        case 7: cout << "seven "; break;
        case 8: cout << "eight "; break;
        case 9: cout << "nine "; break;
    }
}

void printAfterHundredNumberThatIsntOne (int n)
{
    switch (n)
    {
        case 2: cout << "twenty "; break;
        case 3: cout << "thirty "; break;
        case 4: cout << "forty "; break;
        case 5: cout << "fifty "; break;
        case 6: cout << "sixty "; break;
        case 7: cout << "seventy "; break;
        case 8: cout << "eighty "; break;
        case 9: cout << "ninety "; break;
    }
}
