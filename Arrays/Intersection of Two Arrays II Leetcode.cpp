
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int l1=nums1.size();
                int l2=nums2.size();
        vector<int>mp(1001,0);
        for(int i=0;i<l1;i++){
            mp[nums1[i]]+=1;
        }
        vector<int>ans;
        for(int i=0;i<l2;i++){
            if(mp[nums2[i]]>0)
            {ans.push_back(nums2[i]);mp[nums2[i]]-=1;}
        }
        return ans;
    }
};
