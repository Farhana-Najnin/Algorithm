#include <bits/stdc++.h>
int findSecondLargest(int n, vector<int> &arr)
{
    // Write your code here.

    sort(arr.begin(),arr.end());

    auto l=unique(arr.begin(),arr.end());
    arr.erase(l,arr.end());
     if(arr.size()<2) return -1;
    return arr[arr.size()-2];

}
