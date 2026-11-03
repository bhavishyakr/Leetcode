class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {

        vector<int> ans(n + 1, 0);

        for (auto &b : bookings) {
            int first = b[0];
            int last = b[1];
            int seats = b[2];

            ans[first - 1] += seats;
            ans[last] -= seats;
        }

        for (int i = 1; i < n; i++) {
            ans[i] += ans[i - 1];
        }

        ans.pop_back();

        return ans;
    }
};