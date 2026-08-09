class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 2; i++) {

            int j = i + 1;
            int k = n - 1;
             if (i > 0 && nums[i] == nums[i - 1])
                continue;

            while (j < k) {

                int sum = nums[i] + nums[j] + nums[k];


                if (sum == 0) {
                    vector<int> trip = {nums[i], nums[j], nums[k]};
                    ans.push_back(trip);

                    j++;
                    k--;

                    // Skip duplicates
                    while (j < k && nums[j] == nums[j - 1])
                        j++;

                    while (j < k && nums[k] == nums[k + 1])
                        k--;
                }
                else if (sum < 0) {
                    j++;
                }
                else {
                    k--;
                }
            }
        }

        return ans;
    }
};