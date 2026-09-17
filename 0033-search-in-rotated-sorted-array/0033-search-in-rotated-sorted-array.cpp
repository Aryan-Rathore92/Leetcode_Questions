class Solution {
public:
    int getPivot(vector<int>& nums, int n){
     int s = 0;
     int e = n-1;
     int m = s + (e-s)/2;
     while(s < e){
        if(nums[m] >= nums[0]){
            s = m+1;
        }else{
            e = m;
        }
        m = s + (e-s)/2;
     }
     return s;
    }
    int binarySearch(vector<int>& nums, int s,int e, int key){
    int start = s;
    int end = e;
    int mid = (start+end)/2;
    while(start <= end){
        if(nums[mid] == key) return mid;

        if(key > nums[mid]){
            start = mid+1;
        }else{
            end = mid-1;
        }

        mid = (start+end)/2;
    }
    return -1;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot = getPivot(nums, n);
        if(nums[pivot] <= target && nums[n-1] >= target){
            return binarySearch(nums,pivot, n-1,target);
        }else{
            return binarySearch(nums,0, pivot-1,target);
        }
    }
};