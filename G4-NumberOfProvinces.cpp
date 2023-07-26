#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int u,int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void bfs(vector<int> adj[],int s,int visited[])
{
	visited[s]=1;
	queue<int> q;
	q.push(s);

	vector<int> bfs;

	while(!q.empty())
	{
		int node=q.front();
		q.pop();
		bfs.push_back(node);

		for(auto it:adj[node])
		{
			if(!visited[it])
			{
				visited[it]=1;
				q.push(it);
			}
		}
	}
}

int numberOfProvinces(vector<int> adj[],int v)
{
	int visited[v+1]={0};
	int count=0;
	for(int i=0;i<v;i++)
	{
		if(!visited[i])
		{
			bfs(adj,i,visited);
			count++;
		}
	}
	return count++;
}

int main()
{
	int v=7;
	vector<int> adj[v];
	addEdge(adj,0,1);
	addEdge(adj,0,2);
	addEdge(adj,1,3);
	addEdge(adj,2,3);
	addEdge(adj,4,5);
	addEdge(adj,4,6);
	addEdge(adj,5,6);

	int nop = numberOfProvinces(adj,v);
	cout<<"numberOfProvinces = "<<nop;

	return 0;
}