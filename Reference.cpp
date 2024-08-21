#include <iostream>
using namespace std;

int main()
{
    int a = 100;
    int &temp = a;
    cout << temp << endl;
    cout << &a << " " << &temp << endl;
    return 0;
}