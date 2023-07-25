#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int u,int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void dfs(int node,vector<int> adj[],int visited[],vector<int> &ls){
	visited[node]=1;
	ls.push_back(node);

	for(auto it:adj[node]){
		if(visited[it]==0)
			dfs(it,adj,visited,ls);
	}
}

vector<int> dfsOfGraph(vector<int> adj[],int v){
	int visited[v]={0};
	int start=0;
	vector<int> ls;
	dfs(start,adj,visited,ls);
	return ls;
}

int main()
{
	int v=8;
	vector<int> adj[v];
	addEdge(adj,1,2);
	addEdge(adj,1,3);
	addEdge(adj,2,5);
	addEdge(adj,2,6);
	addEdge(adj,3,4);
	addEdge(adj,3,7);
	addEdge(adj,7,8);
	addEdge(adj,8,4);

	vector<int> dfs = dfsOfGraph(adj,v);
	for(auto it:dfs)
		cout<<it<<" ";

	return 0;
}