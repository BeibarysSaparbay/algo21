class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int r = nums.size();
        return (nums[r-1] -1)* (nums[r-2] - 1);
    }
};