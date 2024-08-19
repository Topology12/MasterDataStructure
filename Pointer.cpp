#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A[5] = {1, 2, 3, 4, 5};
    int *p = A;
    for (int *i = p; i != p + 5; i++)
    {
        cout << i << endl;
        cout << *i << endl;
    }
    int *p2;
    p2 = new int[5];
    for (int i = 0; i < 5; i++)
        cin >> p2[i];
    for (int i = 0; i < 5; i++)
        cout << p2[i] << endl;
    delete[] p2;
    delete[] p;
    return 0;
}