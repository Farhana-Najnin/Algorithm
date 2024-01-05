#include<bits/stdc++.h>
using namespace std;
const int N=1e3+5;
vector<int>adj[N];
bool visited[N];
bool dfs(int u,int p=-1){
bool cycleExits=false;
visited[u]=false;
visited[u]=true;
for(int v:adj[u]){
    if(v==p) continue;
    if(visited[v]) return true;
    cycleExits=cycleExits|dfs(v,u);
}
return cycleExits;
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
/*
//graph er ketre ata hobe na
if(dfs(1))
    cout<<"Cycle detected!\n";
else
    cout<<"NO cycle detected!\n";*/
    bool isCycle=false;
    for(int i=0;i<=n;i++){
        if(visited[i]) continue;
        isCycle|=dfs(i);
    }
    if(isCycle)
        cout<<"Cycle detected!\n";
    else
        cout<<"NO cycle!\n";
return 0;
}
/*
8
7
1 2
2 3
3 5
2 4
6 7
6 8
7 8
*/
