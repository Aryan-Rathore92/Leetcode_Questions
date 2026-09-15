class Solution {
public:
   int leftMost(vector<int>& nums, int n, int target){
          int start = 0;
          int end = n-1;
          int ans = -1;
          while(start <= end){

            int mid = start + (end-start)/2;

            if(nums[mid] == target){
                ans = mid;
                end = mid-1;
            }else if(nums[mid] < target){
                start = mid+1;
            }else{
                end = mid-1; // nums[mid] > target
            }
          }
          return ans;
   }
   int rightMost(vector<int>& nums, int n, int target){
          int start = 0;
          int end = n-1;
          int ans = -1;
          while(start <= end){

            int mid = start + (end-start)/2;

            if(nums[mid] == target){
                ans = mid;
                start = mid + 1;
            }else if(nums[mid] < target){
                start = mid+1;
            }else{
                end = mid-1; // nums[mid] > target
            }
          }
          return ans;
   }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int left_most = leftMost(nums, n, target);
        int right_most = rightMost(nums, n, target);
        return {left_most, right_most};
    }
};