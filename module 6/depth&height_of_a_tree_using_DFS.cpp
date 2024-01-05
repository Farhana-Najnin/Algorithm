#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>adj[N];
bool visited[N];
int depth[N];
int height[N];
void dfs(int u){
//section 1: actions just after entering node u
visited[u]=true;
for(int v:adj[u]){
    //section 2:actions before entering a new neighbor
    if(visited[v]==true) continue;//visited hoile next dfs colbe na
    depth[v]=depth[u]+1;
    dfs(v);
    //section 3: actions after exiting a neighbor
    //now we can determine the heigth of u
   /* if(height[v]+1>height[u])
        height[u]=height[v]+1;*/
        //sortcut e likhe
        height[u]=max(height[u],height[v]+1);
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

for(int i=1;i<=n;i++){
    cout<<"Depth of Node"<<i<<": "<<depth[i]<<endl;
}
cout<<"**********"<<endl;
for(int i=1;i<=n;i++){
    cout<<"Height of Node "<<i<<": "<<height[i]<<endl;
}
return 0;
}
/*

12
11
1 2
1 3
1 10
2 4
2 5
3 9
5 6
5 7
6 8
10 11
10 12*/
