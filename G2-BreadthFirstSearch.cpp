#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int u,int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}

vector<int> bfsOfGraph(vector<int> adj[],int v,int s){
	bool visited[v+1];
	for(int i=0;i<v;i++)
		visited[i]=false;
	
	visited[s]=true;

	queue<int> q;
	q.push(s);
	vector<int> bfs;

	while(!q.empty()){
		int node = q.front();
		q.pop();
		bfs.push_back(node);

		for(auto it:adj[node]){
			if(visited[it]==false){
				visited[it]=true;
				q.push(it);
			}
		}
	}
	return bfs;
}

int main(){
	int v=8;
	vector<int> adj[v];
	addEdge(adj,0,1);
	addEdge(adj,0,5);
	addEdge(adj,1,2);
	addEdge(adj,1,3);
	addEdge(adj,3,4);
	addEdge(adj,4,7);
	addEdge(adj,5,6);
	addEdge(adj,5,8);
	addEdge(adj,6,7);

	vector<int> output = bfsOfGraph(adj,v,0);
	for(auto it:output){
		cout<<it<<" ";
	}


	return 0;
}