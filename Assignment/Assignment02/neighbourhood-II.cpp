#include<bits/stdc++.h>
using namespace std;
const int N=100001;
vector<int>adj[N];
vector<int>R;
int level[N];
bool visited[N];
int cnt=0;
void dfs(int s){
    visited[s]=true;
    for(int child:adj[s]){
        if(visited[child]==0){
                cnt++;
            dfs(child);
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

    }
vector<int>V;

int k;
cin>>k;
dfs(k);
cout<<cnt<<endl;
return 0;
}


