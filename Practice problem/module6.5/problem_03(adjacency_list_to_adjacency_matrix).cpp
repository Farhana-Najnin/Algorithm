#include<bits/stdc++.h>
using namespace std;
const int N=10000;
int adjmat[N][N];
vector<int>adj[N];
int main(){
int n,m;
cin>>n>>m;
for(int i=0;i<m;i++){
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
}
for(int i=1;i<=n;i++){
    for(int j:adj[i]){
        adjmat[i][j]=1;
    }
}
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cout<<adjmat[i][j]<<" ";
    }
    cout<<endl;
}
}
