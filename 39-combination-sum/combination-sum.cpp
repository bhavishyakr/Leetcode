
class Solution {
public:
    vector<vector<int>> ans;
    vector<int> path;

    void solve(vector<int>& candidates, int remaining, int start) {
        if (remaining == 0) {
            ans.push_back(path);
            return;
        }

        for (int i = start; i < candidates.size(); i++) {
            if (candidates[i] > remaining) {
                break;
            }

            path.push_back(candidates[i]);
        
            solve(candidates, remaining - candidates[i], i);

            path.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());

        solve(candidates, target, 0);

        return ans;
    }
};
