class Solution {
public:

    bool check_even_digits(int val){
        int dig = 0;
        while(val != 0){
            val /= 10;
            dig++;
        }
        if(dig % 2 ==0)
            return true;
        else
            return false;
    }

    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int val : nums){
            bool result = check_even_digits(val);
            if(result)
                count++;
        }
        return count;
    }

};