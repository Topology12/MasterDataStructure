#include <iostream>
using namespace std;

struct Human
{
    float height;
    float weight;
};

int main()
{
    Human *p = (Human *)new Human;
    p->height = 1.78;
    p->weight = 70.5;
    cout << p->height << endl;
    cout << p->weight << endl;
    return 0;
}