class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_water = 0;
        int volume = 0;
        int width , heightt;
        int st=0 , end=height.size()-1;
        while(st<end){
            width = end-st;
            heightt = min(height[st] , height[end]);
            volume = heightt * width;
            if(volume>max_water)
                max_water = volume;
            height[st]<height[end]?st++:end--;
        }
        return max_water;
    }
};