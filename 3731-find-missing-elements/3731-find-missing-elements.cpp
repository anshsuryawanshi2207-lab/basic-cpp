class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {

        vector<int> ans;
        int n = nums.size();
        if (nums.empty()) return ans;
        sort(nums.begin(),nums.end());

        int prev= nums[0];
        for(int i =1;i<n ;i++){
            while(nums[i]!=prev+1){
                ans.push_back(++prev);
            }
            prev = nums[i];

        }
        return ans;
       
           
    }
};