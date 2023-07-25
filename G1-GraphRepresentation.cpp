#include<bits/stdc++.h>
using namespace std;

//Matrix Method Graph Representation
void matrixMethod()
{
	//vertex and edge
	int n,m;
	cin>>n>>m;

	int adj[n+1][m+1];
	for(int i=0;i<m;i++)
	{
		int u,v;
		cin>>u>>v;
		adj[u][v]=1;
		adj[v][u]=1;
	}
}

//Adjacency List Representation
void addEdge(vector<int> adj[],int u,int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

int main(){
	int v=4;
	vector<int> adj[v];
	addEdge(adj,0,1);
	addEdge(adj,0,2);
	addEdge(adj,1,2);
	addEdge(adj,1,3);

	return 0;

}