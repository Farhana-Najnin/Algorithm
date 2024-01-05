#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>adj[N];
bool visited[N];
void dfs(int u){
//section 1: actions just after entering node u
visited[u]=true;
for(int v:adj[u]){
    //section 2:actions before entering a new neighbor
    if(visited[v]==true) continue;//visited hoile next dfs colbe na
    dfs(v);
    //section 3: actions after exiting a neighbor
}
//section 4: actions before exiting node u
}
int main(){
int n,m;
cin>>n>>m;
for(int i=0;i<m;i++){
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);//directed
    adj[v].push_back(u);
}
/*for(int i=1;i<=n;i++){
    cout<<"List "<<i<<": ";
    for(int j:adj[i]){
        cout<<j<<" ";
    }
    cout<<endl;
}*/
dfs(1);
cout<<"Visiting Array\n";
for(int i=1;i<=n;i++){
    cout<<"Node"<<i<<"status: "<<visited[i]<<endl;
}

return 0;
}
/*
11
11
1 2
2 3
3 8
1 5
5 4
5 6
4 7
6 7
7 8
8 9
10 11*/
/*
//binary tree
*/
