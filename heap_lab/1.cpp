class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    vector<int> ans;
    for(int i=0;i<nums2.size();i++){
        for(int j=0;j<nums1.size();j++){
            if(nums2[i] == nums1[j]){
                ans.push_back(nums2[i]);
                nums1.erase(nums1.begin() + j);
                break;
        }
    }
}
return ans;
        
    }
};