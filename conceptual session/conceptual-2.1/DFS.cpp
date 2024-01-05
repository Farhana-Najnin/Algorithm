#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[1000];
int visited[1000];
void dfs(int par){
cout<<par<<" ";
visited[par]=1;
//for all child of par
for(int child : adj_list[par]){
    if(visited[child]==0)
        dfs(child);
}

}
int main(){
int n,m;
cin>>n>>m;
for(int i=0;i<m;i++){
        int u,v;
cin>>u>>v;
adj_list[u].push_back(v);
adj_list[v].push_back(u);
}

for(int i=0;i<n;i++){
    cout<<i<<"->";
    for(int j=0;j<adj_list[i].size();j++){
        cout<<adj_list[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;
dfs(0);
}
/*
7
6
0 1
0 2
1 3
1 4
2 5
2 6*/
