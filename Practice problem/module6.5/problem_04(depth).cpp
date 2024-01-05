#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[1000];
int visited[1000];
int depth[1000];
void dfs(int par){
visited[par]=1;
for(int child:adj_list[par]){
    if(visited[child]==0){
        depth[child]=depth[par]+1;
        dfs(child);
    }
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
int s;
cin>>s;
dfs(1);
cout<<"Depth of "<<s<<" = "<<depth[s]<<endl;
}
