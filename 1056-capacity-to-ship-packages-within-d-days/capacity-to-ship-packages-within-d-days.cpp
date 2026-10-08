class Solution {
public:
    int calc_days(vector<int>weights , int cap){
        int sum = 0;
        int days = 1;
        for(int val : weights){
            if(sum + val <= cap)
                sum += val;
            else{
                days++;
                sum = val;
            }
        }
        return days;
    }

    

    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin() , weights.end() );

        int sum = 0;
        for (int weight : weights)
            sum += weight;

        int high = sum;
        int mid , ans;
        while(low <= high){
        mid = low + ( high - low )/2;
        int day = calc_days(weights , mid);
        if(day <= days){
            ans = mid;
            high = mid-1;
        }
        else
            low = mid + 1;
        }

        return ans;
    }
};