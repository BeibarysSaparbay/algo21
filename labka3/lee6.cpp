class Solution {
public:
    bool isPerfectSquare(int num) {
        long long sr = sqrt(num);
        return sr*sr == num;
    }
};