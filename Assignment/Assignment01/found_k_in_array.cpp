#include<bits/stdc++.h>
using namespace std;
const int N=1e5+7;
int nums[N];
    int Search(int nums[],int n,int target){
    int low=0,high=n-1;
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }

    }
    return -1;
    }
int main(){
int n;
cin>>n;
for(int i=0;i<n;i++){
    cin>>nums[i];
}
int x;
cin>>x;
int v=Search(nums,n,x);
if(v==-1)
    cout<<"Not Found"<<endl;
else
cout<<v<<endl;
return 0;
}
