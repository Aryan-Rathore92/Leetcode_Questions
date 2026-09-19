class Solution {
public:
    long long int sqaureRoot(int n){
      int s = 0;
      int e = n;
      long long int m = s + (e-s)/2;
      long long int ans = -1;
      while(s <= e){
        long long int square = m*m;
        if(square == n){
            return m;
        }else if(square < n){
            ans = m;
            s = m+1;
        }else if(square > n){
            e = m-1;
        }
        m = s + (e-s)/2;
      }
      return ans;
    }
    int mySqrt(int x) {
        return sqaureRoot(x);
    }
};