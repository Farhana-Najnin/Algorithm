#include<bits/stdc++.h>
using namespace std;
int main(){
int e;
cin>>e;
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
for(int i=0;i<e;i++){
    int a,b;
    cin>>a>>b;
    pq.push({a,b});

}
while(!pq.empty()){
    pair<int,int> p=pq.top();
    cout<<p.first<<" "<<p.second<<endl;
    pq.pop();
}
return 0;
}
