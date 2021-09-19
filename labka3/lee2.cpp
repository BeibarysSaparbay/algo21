class Solution {
public:
    int mySqrt(int x){
        long low = 0,high = x;
        long mid;
        while(low < high){
            mid = low + (high - low) / 2;
            cout<<mid;
            if(mid*mid < x){
                low = mid + 1;
            }
            else{
                high = mid;
            }
        }
        if(low*low == x){
            return low;
        }
        return low - 1;
    }
};