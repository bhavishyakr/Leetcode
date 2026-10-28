class Solution {
public:
    bool isPowerOfThree(int n) {
        // if(n < 3)
        //     return false;
        // if(floor(n/3) == n/3)
        //     return true;
        // return false;
        long long x = 1 , c = 0;
        if(n == 1) return true;
        if(n < 3) return false;
        while(x < n){
            x *= 3;
            c++;
            if(x == n) return true;
        }
        return false;
    }
};