#include<bits/stdc++.h>
using namespace std;
vector<int>adj[10000];
vector<int>V;
vector<int>R;
int cc=0;
bool visited[10000];

void dfs(int u){
visited[u]=true;
cc++;
for(int v:adj[u]){
    if(visited[v]) continue;
    dfs(v);
}
}

int main(){
int n,m;
cin>>n>>m;

for(int i=0;i<m;i++){
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
     adj[v].push_back(u);
}
queue<int>q;
for(int i=0;i<1000;i++){

    if(visited[i]) continue;
     dfs(i);
     if(cc!=1){
     R.push_back(cc);
     }
     cc=0;
}
sort(R.begin(),R.end());
for(int i=0;i<R.size();i++){
    cout<<R[i]<<" ";
}

}

