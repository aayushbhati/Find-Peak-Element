class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int maxi=INT_MIN;
        int ind=0;
        for(int i=1;i<nums.size();i++){
            if(i+1<nums.size()&&nums[i-1]<nums[i] && nums[i+1]<nums[i])return i;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxi){
            maxi=max(maxi,nums[i]);
            ind=i;
            }
        }
        return ind;
    }
};
