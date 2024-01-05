#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
const int N=1e3+10;
vector<string>g;
int visited[N][N];
int level[N][N];
int n,m;
vector<pii>direc={{1,2},{1,-2},{-1,2},{-1,-2},{2,1},{2,-1},{-2,1},{-2,-1}};
bool isValid(int i,int j){
return (i>=0&&i<n&&j>=0&&j<m);
}
void bfs(int si,int sj){
queue<pii>q;
q.push({si,sj});
visited[si][sj]=true;
level[si][sj]=0;
while(!q.empty()){
    pii upair=q.front();
    int i=upair.first;
    int j=upair.second;
    q.pop();
    for(auto d:direc){
        int ni=i+d.first;
        int nj=j+d.second;
        if(isValid(ni,nj)&&!visited[ni][nj]){
            q.push({ni,nj});
            visited[ni][nj]=true;
            level[ni][nj]=level[i][j]+1;
        }
    }
}
}
void reset_level_vis(){
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        level[i][j]=-1;
        visited[i][j]=false;
    }
}
}
int main(){
int si,sj,di,dj,q;
cin>>q;
for(int i=0;i<q;i++){
        cin>>n>>m;
    cin>>si>>sj>>di>>dj;
     reset_level_vis();
    bfs(si,sj);
    cout<<level[di][dj]<<endl;

}
return 0;
}
/*
3
a1 h8
a1 c2
h8 c3
*/


