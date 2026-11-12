class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int flowers = 0;
        if(flowerbed.size() == 1 && flowerbed[0] == 0){
            flowers += 1;
        }
        if(flowerbed.size() > 1 && flowerbed[0] == 0 && flowerbed[1] == 0){
            flowerbed[0] = 1;
            flowers += 1;
        }
        if(flowerbed.size() > 1 && flowerbed[flowerbed.size()-1] == 0 && flowerbed[flowerbed.size() - 2] == 0){
            flowerbed[flowerbed.size()-1] = 1;
            flowers += 1;
        }

        for(int i = 1 ;i < flowerbed.size() - 1 ; i++){
            if((i-1 >=0 && i+1 <flowerbed.size() && flowerbed[i-1] == 0 && flowerbed[i+1] == 0) && flowerbed[i] == 0){
                flowers++;
                flowerbed[i] = 1;
            } 
        }
        return flowers >= n;
    }
};