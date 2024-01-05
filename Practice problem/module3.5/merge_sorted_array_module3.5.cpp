
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int left[m+1];
        int right[n+1];
        for(int i=0;i<m;i++)
            left[i] = nums1[i];
        for(int i=0;i<n;i++)
            right[i] = nums2[i];
        left[m] = INT_MAX;
        right[n] = INT_MAX;

        int lp=0,rp=0;
        for(int i=0;i<n+m;i++)
        {
            if(left[lp]<=right[rp])
            {
                nums1[i] = left[lp];
                lp++;
}
            else
            {
                nums1[i] = right[rp];
                rp++;
            }
        }
    }
};
