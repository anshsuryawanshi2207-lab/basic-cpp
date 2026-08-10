class Solution {
public:

    void solve(vector<int>& candidates, int target, int i,
               vector<int>& ans, vector<vector<int>>& result) {

        // Target reached
        if (target == 0) {
            result.push_back(ans);
            return;
        }

        // No more elements or target exceeded
        if (i == candidates.size() || target < 0) {
            return;
        }

        // Include candidates[i]
        ans.push_back(candidates[i]);

        // i stays same because we can reuse the same element
        solve(candidates, target - candidates[i], i, ans, result);

        // Backtrack
        ans.pop_back();

        // Exclude candidates[i]
        solve(candidates, target, i + 1, ans, result);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<vector<int>> result;
        vector<int> ans;

        solve(candidates, target, 0, ans, result);

        return result;
    }
};