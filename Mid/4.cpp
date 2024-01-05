#include<bits/stdc++.h>
using namespace std;
typedef pair<long long int,long long int>pii;
const int  N=1e3+5;
const int INF=1e9+10;
vector<pii>adj[N];
vector<long long int>dist(N,INF);
vector<bool>visited(N);

void dijkstra(int source){
priority_queue<pii,vector<pii>,greater<pii>>pq;
dist[source]=0;
pq.push({dist[source],source});
while(!pq.empty()){
    int u=pq.top().second;
    pq.pop();
    visited[u]=true;
    for(pii vpair: adj[u])
    {
        int v=vpair.first;
        int w=vpair.second;
        if(visited[v]) continue;
        if(dist[v]>dist[u]+w){
            dist[v]=dist[u]+w;
            pq.push({dist[v],v});
        }
    }
}
}
int main(){
int n,m;
cin>>n>>m;
for(int i=0;i<m;i++){
    long long int u,v,w;
    cin>>u>>v>>w;
    adj[u].push_back({v,w});
    //adj[v].push_back({u,w});
}
int src;
cin>>src;
dijkstra(src);
int q;
cin>>q;
for(int i=0;i<q;i++){
    int d,dw;
    cin>>d>>dw;
    if(dist[d]<=dw){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
}
return 0;
}
