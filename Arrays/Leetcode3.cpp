class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans;
        int l=nums.size(),p=-1;
        vector<int>placed(l,0);
        for(int i=0;i<l;i++)
        {
            if(nums[i]>=0)
            {p=i; break;}
            else{
                if(i==l-1)
                {p=l;break;}
            }
        }
           int i=p-1,j=p;
        while(i>=0||j<=l-1)
        {
            if(i<0){
                for(int k=j;k<l;k++)
                    ans.push_back(nums[k]*nums[k]);
                break;
            }
             if(j>l-1){
                for(int k=i;k>=0;k--)
                    ans.push_back(nums[k]*nums[k]);
                break;
            }
            int le=nums[i]*nums[i];
            int r=nums[j]*nums[j];
            if((le)>=(r))
            { ans.push_back(r);j++;}
            else
                if((le)<(r))         
                {ans.push_back(le);i--;}     
        }
        return ans;
    }
};
