#include<bits/stdc++.h>
using namespace std;
void mergeSortedArray(int arr1[],int arr2[],int size1,int size2,int mergedArr[]){
    int i=0;//index for arr1
    int j=0;//index for arr2
    int k=0;//index for mergedArray
    //merge the two arrays while both have elements
    while(i<size1&&j<size2){
        if(arr1[i]<=arr2[j]){
            mergedArr[k]=arr1[i];
            i++;
        }
        else{
            mergedArr[k]=arr2[j];
            j++;
        }
        k++;
    }
    //if there are remaining elements in arr1 or arr2, add them to the merged array
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
int arr1[]={1,3,5,7,9};
int size1=sizeof(arr1)/sizeof(arr1[0]);
int arr2[]={2,4,6,8,10};
int size2=sizeof(arr2)/sizeof(arr2[0]);
int mergedSize=size1+size2;
int mergedArr[mergedSize];
//call the mergedSortedArrays function
mergeSortedArray(arr1,arr2,size1,size2,mergedArr);
//print the merged array
for(int i=0;i<mergedSize;i++){
    cout<<mergedArr[i]<<" ";
}
return 0;
}
