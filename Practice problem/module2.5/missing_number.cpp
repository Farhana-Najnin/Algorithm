class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int fr[n+1];
        for(int i=0;i<n+1;i++){
            fr[i]={0};
        }
        for(int i=0;i<n;i++){
            fr[nums[i]]++;
        }
        int a;
       for(int i=0;i<n+1;i++){
            if(fr[i]==0)
            a=i;

        }
        return a;
    }
};
