#include <iostream>
using namespace std;

typedef struct rectangle Rectangle;
#define MAX 100
struct rectangle
{
    int length;
    int breadth;
};

struct ArrayPassByValue
{
    int A[MAX];
    int n;
};

int area(Rectangle r)
{
    int area = (r.breadth + r.length) * 2;
    return area;
}
void changeBreadth(Rectangle *r)
{
    r->breadth = 7;
}
void changeLength(Rectangle &r)
{
    r.length = 13;
}
int *copyArrayFromStruct(ArrayPassByValue array)
{
    int *temp;
    temp = array.A;
    return temp;
}
int main()
{
    // Rectangle r1;
    // r1.breadth = 5;
    // r1.length = 10;
    // cout << area(r1) << endl;
    // changeBreadth(&r1);
    // changeLength(r1);
    // cout << area(r1) << endl;
    ArrayPassByValue a;
    for (int i = 0; i < 5; i++)
    {
        cin >> a.A[i];
    }
    int *arrayCoppy;
    arrayCoppy = copyArrayFromStruct(a);
    for (int i = 0; i < 5; i++)
        cout << arrayCoppy[i];
    return 0;
}