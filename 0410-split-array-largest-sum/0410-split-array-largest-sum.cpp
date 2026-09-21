class Solution {
    bool isPossible(vector<int>& nums, int k, int mid,int n){
           int painter = 1;
           int paint = 0;
           for(int i=0; i<n; i++){
            if(paint + nums[i] <= mid){
                paint += nums[i];
            }else{
                painter++;
                if(painter > k || nums[i] > mid) return false;
                paint = nums[i];
            }
           }
           return true;
    }
public:
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int s = 0;
        int sum = 0, ans = -1;
        for(int i=0; i<n; i++){
            sum += nums[i];
        }
        int e = sum;
        int mid = s + (e-s)/2;

        while( s <= e){
            if(isPossible(nums,k,mid,n)){
               ans = mid;
               e = mid-1;
            }else{
                s = mid+1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }
};