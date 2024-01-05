#include<bits/stdc++.h>
using namespace std;
const int N=1e5+3;
vector<int>adj[N];
bool visited[N];
int level[N];
void bfs(int s){
queue<int>q;
q.push(s);
visited[s]=true;
level[s]=0;
while(!q.empty()){
    int u=q.front();
    q.pop();
    //section 1:A node is being processed
    cout<<"visiting node: "<<u<<endl;
    for(int v:adj[u]){
        //section 2:child processing
        if(visited[v]==true) continue;
        q.push(v);
        visited[v]=true;
        //section 3: child processing
        level[v]=level[u]+1;
    }
    //section 4: same as section 1
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
bfs(1);
for(int i=1;i<=n;i++){
    cout<<"level of "<<i<<": "<<level[i]<<endl;
}
//cout<<level[7]<<endl;
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
7 8
10 11
10 12
*/
