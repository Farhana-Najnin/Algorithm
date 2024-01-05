#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[10000];
int visited[10000];
int depth[10000];
int height[10000];
void dfs(int par)
{
    cout<<par<<" ";
    visited[par]=1;
    for(int child:adj_list[par])
    {
        if(visited[child]==0)
        {
            depth[child]=depth[par]+1;
            dfs(child);
            height[par]=max(height[par],height[child]+1);
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
for(int i=0;i<n;i++){
    cout<<i<<"->";
    for(int j=0;j<adj_list[i].size();j++){
        cout<<adj_list[i][j]<<" ";
    }
    cout<<endl;
}
int src=0;
dfs(src);
cout<<endl;
cout<<depth[5]<<endl;
cout<<endl<<height[src]<<" ";
}
