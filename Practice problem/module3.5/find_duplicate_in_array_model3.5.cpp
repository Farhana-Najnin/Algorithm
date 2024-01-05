#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	int frq[n];
	for(int i=0;i<n;i++){
		frq[i]={0};
	}
	for(int i=0;i<n;i++){
		frq[arr[i]]++;

	}
	for(int i=0;i<n;i++){
	 if(frq[i]>1)
	  return i;
	}
}
