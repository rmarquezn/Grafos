#include <iostream>
#include <list>
using namespace std;

class Grafo
{
    int vertices;
    list<int> *a;
    void funcionDFS(int b, bool visitado[]);

public:
    Grafo(int vertices);
    void arco(int b, int c);
    void dfs(int b);
};

Grafo::Grafo(int vertices)
{
    this->vertices = vertices;
    a = new list<int>[vertices];
}
void Grafo::arco(int b, int c)
{
    a[b].push_back(c);
}
void Grafo::funcionDFS(int b, bool visitado[])
{
    visitado[b] = true;
    cout << b << " ";
    list<int>::iterator i;
    for (i = a[b].begin(); i != a[b].end(); i++)
    {
        if (!visitado[*i])
        {
            funcionDFS(*i, visitado);
        }
    }
}

void Grafo::dfs(int b)
{
    bool *visitado = new bool[vertices];
    for (int i = 0; i < vertices; i++)
    {
        visitado[i] = false;
        funcionDFS(b, visitado);
    }
}

int main()
{
    Grafo g(4);
    g.arco(0, 1);
    g.arco(0, 2);
    g.arco(1, 2);
    g.arco(2, 0);
    g.arco(2, 3);
    g.arco(3, 3);

    cout << "desde el vértice 2, el dfs es: ";
    g.dfs(2);
    return 0;
}