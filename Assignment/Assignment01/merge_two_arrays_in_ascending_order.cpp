#include<bits/stdc++.h>
using namespace std;
void mergeSortedArray(int arr1[],int arr2[],int size1,int size2,int mergedArr[]){
    int i=0;
    int j=0;
    int k=0;

    while(i<size1 && j<size2){
        if(arr1[i]>=arr2[j]){
            mergedArr[k]=arr1[i];
            i++;
        }
        else{
            mergedArr[k]=arr2[j];
            j++;
        }
        k++;
    }

    while(i<size1){
        mergedArr[k]=arr1[i];
        i++;
    }
     while(j<size2){
        mergedArr[k]=arr2[j];
        j++;
    }
}
int main(){

int n,m;
cin>>n;
int arr1[n];
for(int i=0;i<n;i++){
    cin>>arr1[i];
}
cin>>m;
int arr2[m];
for(int i=0;i<m;i++){
    cin>>arr2[i];
}
int mergedSize=n+m;
int mergedArr[mergedSize];


mergeSortedArray(arr1,arr2,n,m,mergedArr);

for(int i=0;i<mergedSize;i++){
    cout<<mergedArr[i]<<" ";
}
return 0;
}

