class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int>ans;
        int l=arr.size();
        for(int i=0;i<l&&ans.size()<l;i++){
            if(arr[i]==0)
            {ans.push_back(arr[i]);ans.push_back(arr[i]);}
            else
               ans.push_back(arr[i]); 
        }
        if(ans.size()>l)
            ans.pop_back();
        arr=ans;
        }
};
