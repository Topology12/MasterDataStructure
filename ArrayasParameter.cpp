#include <iostream>
using namespace std;

void fun(int A[], int n)
{
    for (int i = 0; i < n; i++)
        cin >> A[i];
}
int *fuc_array(int n)
{
    int *p;
    p = (int *)malloc(n * sizeof(int));
    return p;
}

int main()
{
    int *a;
    a = fuc_array(5);
    fun(a, 5);
    for (int i = 0; i < 5; i++)
        cout << a[i] << endl;
    delete[] a;
    return 0;
}