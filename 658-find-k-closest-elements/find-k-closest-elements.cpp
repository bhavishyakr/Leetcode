class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int s = 0;
        int e = arr.size()-1;
        vector<int>ans;
        // while(s < e){
        //     if(k>0){
        //         if( abs(x - arr[s]) < abs(x - arr[e]) ){
        //             ans.push_back(arr[s]);
        //             s++;
        //         }
        //         else if( abs(x - arr[s]) > abs(x - arr[e]) ){
        //             ans.push_back(arr[e]);
        //             e--;
        //         }
        //         else{
        //             if(arr[s] < arr[e]){
        //                 ans.push_back(arr[s]);
        //                 s++;
        //             }else
        //                 e--;

        //         }
        //         k--;

        //     }
        // }
        while(e - s >= k){
            if(abs(arr[s] - x)  > abs(arr[e] - x)){
                s++;
            }else{
                e--;
            }
        }
        for(int i=s ; i<=e; i++){
            ans.push_back(arr[i]);
        } 
        cout<<s<<" "<<e<<endl;
        return ans;
    }
};