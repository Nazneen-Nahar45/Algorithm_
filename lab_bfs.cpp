 #include<bits/stdc++.h>
#define mx 150000
using namespace std;

vector<int>adj[mx];
bool visited[mx];


void bfs( int u )
{
    visited[u]= 1;
    queue<int>q;
    q.push(u);

    while(!q.empty())
    {
        u= q.front();
        q.pop();

        cout<<u<<endl;

        for( int i=0; i<adj[u].size(); i++ )
        {
            int v= adj[u][i];

            if(!visited[v])
            {
                visited[v]= 1;
                q.push(v);
            }
        }
    }
}

void edge(int p , int q){
    int e ;

  for(int i =0 ; i<e ; i++){
     adj[p].push_back(q);
     adj[q].push_back(p);
  }

 }

int main()
{
    int n,e;
    n = 5;
    e=4;
    //cout<<"enter the number of nodes and edges : "<< " " ;


   edge(1,2);
   edge(1,5);
   edge(2,3);
   edge(2,4);

    bfs(1);
}


