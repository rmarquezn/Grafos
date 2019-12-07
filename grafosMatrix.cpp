#include <iostream>
using namespace std;

int matrix[20][20];
int c = 0;
void imprimir(int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void arco(int m, int n)
{
    matrix[m][n] = 1;
    matrix[n][m] = 1;
}

int main(int c, char* v[]){
    int n=6;
    arco(0,3);
    arco(0,2);
    arco(0,4);
    arco(1,2);
    arco(1,3);
    arco(2,5);
    arco(5,2);
    arco(5,4);
    arco(5,3);
    imprimir(n);
    return 0;
}