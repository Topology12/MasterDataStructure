#include <iostream>
using namespace std;

#define COL 10
#define ROW 10

struct Matrix
{
    int col;
    int row;
    int M[ROW][COL];
};

void sumMatrix(int M[ROW][COL], int N[ROW][COL], int col_m, int row_m, int col_n, int row_n, Matrix &s)
{
    if (row_m == row_n && col_m == col_n)
    {
        s.col = col_m;
        s.row = row_m;
        for (int i = 0; i < row_m; i++)
            for (int j = 0; j < col_m; j++)
                s.M[i][j] = M[i][j] + N[i][j];
    }
}
void deleteMatrix(int **m, int row)
{
    for (int i = 0; i < row; i++)
        delete[] m[i];
    delete[] m;
}
void InputMatrix(int M[ROW][COL], int row, int col)
{
    cout << "Enter Matrix" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cin >> M[i][j];
    }
}
void PrintMatrix(Matrix m)
{
    for (int i = 0; i < m.row; i++)
        for (int j = 0; j < m.col; j++)
            cout << m.M[i][j] << " ";
}
struct Array2D
{
    int col;
    int row;
    int **M;
};

int **SumArray(int **M, int **N, int row_m, int col_m, int row_n, int col_n)
{
    int **S = new int *[col_m];
    for (int i = 0; i < row_m; i++)
        S[i] = new int[col_m];
    if (col_m == col_n && row_m == row_n)
    {
        for (int i = 0; i < row_m; i++)
            for (int j = 0; j < col_n; j++)
                S[i][j] = M[i][j] + N[i][j];
    }
    return S;
}

int main()
{
    // Matrix m;
    // cin >> m.col;
    // cin >> m.row;
    // Matrix n;
    // cin >> n.col;
    // cin >> n.row;
    // InputMatrix(m.M, m.row, m.col);
    // InputMatrix(n.M, n.row, n.col);
    // PrintMatrix(m);
    // Matrix s;
    // sumMatrix(m.M, n.M, m.col, m.row, n.col, n.row, s);
    // // PrintMatrix(s);
    // cout << s.col << endl;
    // cout << s.row << endl;
    struct Array2D A;
    A.row = 2;
    A.col = 2;
    A.M = new int *[A.row];
    for (int i = 0; i < A.row; i++)
        A.M[i] = new int[A.col];
    for (int i = 0; i < A.row; i++)
        for (int j = 0; j < A.col; j++)
            cin >> A.M[i][j];
    for (int i = 0; i < A.row; i++)
        for (int j = 0; j < A.col; j++)
            cout << A.M[i][j];
    deleteMatrix(A.M, A.row);
    return 0;
}