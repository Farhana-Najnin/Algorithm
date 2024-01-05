#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>adj[N];
bool visited[N];
int level[N];
void dfs(int u){
visited[u]=true;
for(int v:adj[u]){
    if(visited[v]) continue;
    dfs(v);
}
}
int main(){
int n,m;
cin>>n>>m;
int cc=0;
for(int i=0;i<m;i++){
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
}
for(int i=1;i<=n;i++){
    if(visited[i]) continue;
    dfs(i);
    cc++;
}
cout<<"Number of connected components: "<<cc<<endl;
return 0;
}
/*
7
5
1 2
1 3
2 3
2 4
5 6
*/
