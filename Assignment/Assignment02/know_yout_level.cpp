#include<bits/stdc++.h>
using namespace std;
const int N=100001;
vector<int>adj[N];
int level[N];
bool visited[N];

void bfs(int s)
{
    queue<int>q;
    q.push(s);
    visited[s]=true;
    level[s]=0;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int v:adj[u])
        {
            if(visited[v]==true) continue;
            q.push(v);
            visited[v]=true;
            level[v]=level[u]+1;
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
vector<int>V;
bfs(0);
int x;
cin>>x;
if(x==0){
     cout<<x;
}
else{
for(int i=0;i<n;i++){
    if(level[i]==x){
        V.push_back(i);
    }
}
if(V.empty()){
        int y=-1;
     cout<<y;
}
   else{
sort(V.begin(),V.end());
for(int i=0;i<V.size();i++){
    cout<<V[i]<<" ";
}
   }
}
return 0;
}
