//DFS TREN DO THI CO HUONG
#include<bits/stdc++.h>
using namespace std;
int n,m,u;
vector<int>adj[1001];
bool visited[1001];
void init(){
	cin>>n>>m>>u;
	memset(visited,false,sizeof(visited));
	for(int i=0;i<1001;i++)adj[i].clear();
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		//adj[y].push_back(x);
	}
	
}
void dfs(int u){
	cout<<u<<" ";
	visited[u]=true;
	for(int x:adj[u]){
		if(!visited[x]){
			dfs(x);
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		init();
		dfs(u);
		cout<<"\n";
	}
}