#include<bits/stdc++.h>
using namespace std;
const int N=100001;
vector<int>adj[N];

int cnt=0;
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
         adj[v].push_back(u);
    }
vector<int>V;

int k;
cin>>k;
for(int i=0;i<n;i++){
        if(i==k){
    for(int j:adj[i]){
        cnt++;
    }
        }
}
cout<<cnt<<endl;
return 0;
}


