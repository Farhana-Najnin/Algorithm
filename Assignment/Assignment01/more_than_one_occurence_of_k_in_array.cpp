#include<bits/stdc++.h>
using namespace std;
const int N=1e5+7;
int nums[N];
bool Search(int nums[],int n,int target)
{
    int low=0,high=n-1;
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(nums[mid]==target)
        {
            if(mid>0)
            {
                if(nums[mid-1]==target)
                {

                    return true;
                }
            }
            if(mid<n)
            {
                if(nums[mid+1]==target)
                {

                    return true;
                }
                return false;
            }
        }
        else if(nums[mid]<target)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }

    }

    return false;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>nums[i];
    }
    int x;
    cin>>x;
    bool v=Search(nums,n,x);
    if(v)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}

