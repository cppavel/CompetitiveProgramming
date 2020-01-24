#include <iostream>
#include <algorithm>
#include <unordered_map>

#define N 9
#define inf 0x3f3f3f3f
using namespace std;


void dijkstra(int g[N][N], int* dst, int source)
{
	bool* visited = new bool[N]; 

	for (int i = 0; i < N; i++)
	{
		visited[i] = false;
	}

	dst[source] = 0;

	for (int i = 0; i < N; i++)
	{
		if (i != source)
		{
			dst[i] = inf;
		}
	}



	for (int count = 0; count < N; count++)
	{
		int d = inf;
		int u;
		for (int i = 0; i < N; i++)
		{
			if (!visited[i])
			{
				if (dst[i] < d)
				{
					d = dst[i];
					u = i;
				}
			}
		}
		visited[u] = true;

		for (int k = 0; k < N; k++)
		{
			if (g[u][k] != 0 && !visited[k])
			{
				if (dst[k] > dst[u] + g[u][k])
				{
					dst[k] = dst[u] + g[u][k];
				}
			}
		}
	}

	delete[] visited;
}



int main()
{
	int g[N][N] = 
	{ { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
	{ 4, 0, 8, 0, 0, 0, 0, 11, 0 },
	{ 0, 8, 0, 7, 0, 4, 0, 0, 2 },
	{ 0, 0, 7, 0, 9, 14, 0, 0, 0 },
	{ 0, 0, 0, 9, 0, 10, 0, 0, 0 },
	{ 0, 0, 4, 14, 10, 0, 2, 0, 0 },
	{ 0, 0, 0, 0, 0, 2, 0, 1, 6 },
	{ 8, 11, 0, 0, 0, 0, 1, 0, 7 },
	{ 0, 0, 2, 0, 0, 0, 6, 7, 0 } };

	int source = 0;
	int* distances = new int[N];

	dijkstra(g, distances, source);

	for (int i = 0; i < N; i++)
	{
		cout << i << ' ' << distances[i] << endl;
	}
  
  delete[] distances;
   
  return 0;
}
