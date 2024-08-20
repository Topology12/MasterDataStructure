#include <iostream>
using namespace std;

void swapbyaddress(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapbyreference(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 5;
    int b = 6;
    swapbyaddress(&a, &b);
    cout << a << " " << b;
    swapbyreference(a, b);
    cout << a << " " << b;
    return 0;
}