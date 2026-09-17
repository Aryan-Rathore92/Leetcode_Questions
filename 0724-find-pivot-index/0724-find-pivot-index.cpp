class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int n = nums.size();
       int sum = 0;

       for(int i=0; i<n; i++){
        sum += nums[i]; // Calculate total sum
       }
       int cumulativeSum = 0; // Before the index sum of all left side elements

       for(int i=0; i<n; i++){

        int leftSum = cumulativeSum;
        int rightSum = sum-cumulativeSum-nums[i]; // rightSide sum exculde index

        if(leftSum == rightSum) return i;

        cumulativeSum += nums[i];
       }
       return -1;
    }
};