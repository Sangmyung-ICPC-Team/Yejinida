// baekjoon_2606.cpp
#include <iostream>
using namespace std;

int graph[101][101] = {0};
int visit[101] = {0};
int res = 0;

int dfs(int start, int net){
	visit[start] = 1;
	res++;

	for (int i = 0; i <= net; i++){
		if(graph[start][i] == 1 && visit[i] == 0)
			dfs(i, net);
	}

	return res;

}

int main(void){
	int num, net;

	cin >> num >> net;

	for (int i = 0; i < net; i++){
		int u, v;

		cin >> u >> v;
		graph[u][v] = graph[v][u] = 1;
	}

	cout << dfs(1, num) - 1 << '\n';

	return 0;

}