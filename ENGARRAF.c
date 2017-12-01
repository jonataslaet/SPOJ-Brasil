// Implementação do algoritmo de Dijkstra
// Teste: http://br.spoj.com/problems/ENGARRAF/
// Autor da implementação original: Marcos Castro
// Adaptado por: Jonatas Laet

#include <iostream>
#include <list>
#include <queue>
#define INFINITO 900000000
#include <stdio.h>

using namespace std;

class Grafo
{
private:
	int V; // número de vértices

	// ponteiro para um array contendo as listas de adjacências
	list<pair<int, int> > * adj;

public:

	// construtor
	Grafo(int V)
	{
		this->V = V; // atribui o número de vértices

		/*
			cria as listas onde cada lista é uma lista de pairs
			onde cada pair é formado pelo vértice destino e o custo
		*/
		adj = new list<pair<int, int> >[V];
	}

	// adiciona uma aresta ao grafo de v1 à v2
	void addAresta(int v1, int v2, int custo)
	{
		adj[v1].push_back(make_pair(v2, custo));
	}

	// algoritmo de Dijkstra
	int dijkstra(int orig, int dest)
	{
		// vetor de distâncias
		int dist[V];

		/*
		   vetor de visitados serve para caso o vértice já tenha sido
		   expandido (visitado), não expandir mais
		*/
		int visitados[V];

		// fila de prioridades de pair (distancia, vértice)
		priority_queue < pair<int, int>,
					   vector<pair<int, int> >, greater<pair<int, int> > > pq;

		// inicia o vetor de distâncias e visitados
		for(int i = 0; i < V; i++)
		{
			dist[i] = INFINITO;
			visitados[i] = false;
		}

		// a distância de orig para orig é 0
		dist[orig] = 0;

		// insere na fila
		pq.push(make_pair(dist[orig], orig));

		// loop do algoritmo
		while(!pq.empty())
		{
			pair<int, int> p = pq.top(); // extrai o pair do topo
			int u = p.second; // obtém o vértice do pair
			pq.pop(); // remove da fila

			// verifica se o vértice não foi expandido
			if(visitados[u] == false)
			{
				// marca como visitado
				visitados[u] = true;

				list<pair<int, int> >::iterator it;

				// percorre os vértices "v" adjacentes de "u"
				for(it = adj[u].begin(); it != adj[u].end(); it++)
				{
					// obtém o vértice adjacente e o custo da aresta
					int v = it->first;
					int custo_aresta = it->second;

					// relaxamento (u, v)
					if(dist[v] > (dist[u] + custo_aresta))
					{
						// atualiza a distância de "v" e insere na fila
						dist[v] = dist[u] + custo_aresta;
						pq.push(make_pair(dist[v], v));
					}
				}
			}
		}

		// retorna a distância mínima até o destino
		return dist[dest];
	}
};
// N = número de cidades (numeradas de 1 a N)
// E = número de acordos de envio de mensagem
// K = número de consultas
int main(int argc, char *argv[])
{
	int N, E, K, X, Y, H, O, D;
	int custoMinimo;
	while (1)
	{
		Grafo g(111);
		custoMinimo = 0;
		cin >> N >> E;
		if (N == 0 && E == 0) break;
		else
		{
			for (int i = 0; i < E; i++)
			{
				//Há um caminho de X para Y que dura H horas
				cin >> X >> Y >> H;
				g.addAresta(X-1, Y-1, H);
			}
			//cin >> K;
			//for (int i = 0; i < K; i++)
			//{
				//Qual o tempo mínimo da cidade O para a cidade D?
				cin >> O >> D;
				custoMinimo = g.dijkstra(O-1, D-1);
				if (custoMinimo == INFINITO)
				{
					printf("-1\n");
				}
				else cout << custoMinimo << endl;
			//}
		}
	}

	return 0;
}