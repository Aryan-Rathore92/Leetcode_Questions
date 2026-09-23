class Solution {
    bool isPossible(vector<int>& position, int m, int mid){
        int ballCount = 1;
        int lastPosition = position[0];

        for(int i=0; i < position.size(); i++){
            if(position[i]-lastPosition >= mid){
                ballCount++;
                if(ballCount == m){
                    return true;
                }
                lastPosition = position[i];
            }
        }
        return false;
    }
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int s = 0;
        int maxValue = -1;
        int ans = -1;
        for(int i=0; i<position.size(); i++){
            maxValue = max(maxValue, position[i]);
        }
        int e = maxValue;
        int mid = s + (e-s)/2;

        while( s <= e ){
            if(isPossible(position, m, mid)){
                ans = mid;
                s = mid+1;
            }else{
                e = mid-1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }
};