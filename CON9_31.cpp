//KIEM TRA DO THI CO PHAI LA CAY HAY KHONG
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<vector<int> > vt;
const ll mod = 1e9 + 7;
const int oo = 1e6 + 7;
#define maxn 1005
int check[maxn];
int N;
void DFS(vector<int> adj[], int u)
{
	check[u]=1;
	for(int v:adj[u])
	{
		if(!check[v]) DFS(adj, v);
	}
}
bool LienThong()
{
	for(int i=1;i<=N;i++)
	   if(check[i]==0)
	   return false;
	return true;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int t; cin >> t;
    while(t--)
	{
		vector<int> adj[maxn];

		cin >> N;
		memset(check, 0, sizeof(check));
		for(int i=0;i<N-1;i++)
		{
			int x, y;
			cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		DFS(adj, 1);
		if(LienThong())
		cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
    }
    return 0;
}