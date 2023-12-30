#include<bits/stdc++.h>
using namespace std;

const int N= 100007;

int n, m;
vector<pair<int, int>> adj[N];
long long dist[N];
bool vis[N];

void dijkstra(int s, int t) {

  const long long inf = 1e18;
  priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;

  for(int i=1;i<=n;i++)
	dist[i] = inf;

  pq.push({0, s});
  dist[s] = 0;

  while(!pq.empty()) {
    auto x = pq.top();
    pq.pop();
    int u = x.second;

    if(vis[u]) continue;
    vis[u] = 1;
    for(int i=0;i<adj[u].size();i++) {
     pair<int,int>y= adj[u][i];

      int v = y.second;
      long long w = y.first;

      if(dist[u] + w < dist[v])
      {
        dist[v] = dist[u] + w;
        pq.push({dist[v], v});
      }
    }
  }
}

int main()
{
  int s, t;
  cin >> n >> m >> s >> t;
  for(int i = 1; i <= m; i++) {
    int u,v,w;
    cin>>u>>v>>w;
    adj[u].push_back({w, v});
    adj[v].push_back({w, u});
  }

  dijkstra(s, t);

  for(int i=1;i<=n;i++)
	cout<<dist[i]<<"\n";
}
