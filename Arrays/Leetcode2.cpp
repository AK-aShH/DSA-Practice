class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int l=nums.size();
        int ans=0;
        for(int i=0;i<l;i++)
        {   int c=1;
            while(nums[i]/=10)
                c++;
         if(c%2==0)
             ans++;
        }return ans;
    }
};
