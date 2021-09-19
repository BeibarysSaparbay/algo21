class Solution {
public:
bool binary_search(vector<int>& nums2,int target){
    int low=0,high=nums2.size()-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums2[mid]==target){
            nums2[mid] = -1;
            return true;
        }
        else if(nums2[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return false;
}

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
    vector<int> result;
    for(int i=0;i<nums1.size();){
        int target=nums1[i];
        if(binary_search(nums2,target)){
            result.push_back(target);
        }
    }
    return result;
    }
};