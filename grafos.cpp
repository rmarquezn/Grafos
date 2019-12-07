#include <iostream>
#include <vector>
using namespace std;

struct Arco
{
    int a, b;
};

class Grafo
{
public:
    vector<vector<int>> lista;

    Grafo(vector<Arco> const &arcos, int n)
    {
        lista.resize(n);
        for (auto &arco : arcos)
        {
            lista[arco.a].push_back(arco.b);
            //Lista[arco.b].push_back(arco.a);
        }
    }
};

void imprimir(Grafo const &grafo, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i << " -> ";
        for (int j : grafo.lista[i])
            cout << j << " ";
        cout << endl;
    }
}

int main()
{
    vector<Arco> arcos = {
        {0, 1}, {1, 2}, {2, 0}, {2, 1}, {3, 2}, {4, 5}, {5, 4}};
    int n = 6;
    Grafo grafo(arcos, n);
    imprimir(grafo, n);
    return 0;
}