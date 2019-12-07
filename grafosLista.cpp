#include <iostream>
#include <list>
#include <iterator>
using namespace std;
void imprimir(list<int> lista[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i << "->";
        list<int>::iterator it;
        for (it = lista[i].begin(); it != lista[i].end(); ++it)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
}

void arco(list<int> lista[], int m, int n)
{
    lista[m].push_back(n);
    lista[n].push_back(m);
}

int main(int c, char *v[])
{
    int n = 6;
    list<int> lista[n];
    arco(lista, 0, 3);
    arco(lista, 0, 2);
    arco(lista, 0, 4);
    arco(lista, 1, 2);
    arco(lista, 1, 3);
    arco(lista, 2, 5);
    arco(lista, 5, 2);
    arco(lista, 5, 4);
    arco(lista, 5, 3);
    imprimir(lista, n);
    return 0;
}