class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=prices.size();
        int s=prices[0],t=0,mx=0;
        for(int i=1;i<l;i++){
            t=prices[i]-s;
            if(t>mx)
                mx=t;
            if(t<0)
                s=prices[i];
        }
        return mx;
    }
};
