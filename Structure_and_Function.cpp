#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void initStruct(Rectangle *r, int l, int b)
{
    r->length = l;
    r->breadth = b;
}

int area(Rectangle r)
{
    return r.length * r.breadth;
}

int main()
{
    Rectangle r;
    initStruct(&r, 10, 5);
    cout << area(r);
    return 0;
}