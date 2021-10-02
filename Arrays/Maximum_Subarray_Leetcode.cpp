
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int l=nums.size();
        int s=-10001, ts=0;
        for(int i=0;i<l;i++){
            ts+=nums[i];
                if(ts>s)
                    s=ts;
            if(ts<0)
                ts=0;
        }return s;
    }
};
