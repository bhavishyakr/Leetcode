class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> arr2(arr.size());
        int maxi = -1;
        for(int i=arr.size()-1 ; i>=0 ; i--){
            arr2[i] = (maxi);
            maxi = max(arr[i] , maxi);
        }
        return arr2;

    }
};