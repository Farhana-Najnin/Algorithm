#include<bits/stdc++.h>

void merge(int l,int r,int mid,vector<int>&arr){
int left_size=mid-l+1;
int L[left_size+1];
int right_size=r-mid;
int R[right_size+1];
for(int i=l,j=0;i<=mid;i++,j++)
    L[j]=arr[i];
for(int i=mid+1,j=0;i<=r;i++,j++)
    R[j]=arr[i];
L[left_size]=INT_MAX;
R[right_size]=INT_MAX;
int lp=0,rp=0;
for(int i=l;i<=r;i++){
    if(L[lp]<=R[rp]){
        arr[i]=L[lp];
        lp++;
    }
    else{
        arr[i]=R[rp];
        rp++;
    }
}
}
void mergesort(int l,int r,vector<int>&arr){
if(l==r) return ;
int mid=(l+r)/2;
mergesort(l,mid,arr);
mergesort(mid+1,r,arr);
merge(l,r,mid,arr);
}
void mergeSort(vector < int > & arr, int n) {
    // Write your code here.
    mergesort(0,n-1,arr);

}
