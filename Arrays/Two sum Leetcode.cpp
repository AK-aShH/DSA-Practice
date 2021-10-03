class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l=nums.size();
        int i=0,j=l-1;
        int dup=0;
        map<int, int>mp;
        for(int k=0;k<l;k++)
        {
            if(mp[nums[k]]>0)
             dup=k;
             else
            mp[nums[k]]=k;}
        
        sort(nums.begin(),nums.end());
        while(i<j){
             int s=nums[i]+nums[j];
            if(s==target)
                break;
            else
                if(s<target)
                    i++;
            else
                j--;
        }vector<int>ans;
        
        if(nums[i]==nums[j])
        {ans.push_back(dup);ans.push_back(mp[nums[i]]);}
        else{
        ans.push_back(mp[nums[i]]);
        ans.push_back(mp[nums[j]]);}
        return ans;
    }
};
