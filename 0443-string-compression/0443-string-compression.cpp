class Solution {
public:
    int compress(vector<char>& chars) {
        int i =0;
        int ansIndex = 0;
        int n = chars.size();

        while( i < n ){
            
            int j = i+1;
            while( j < n && chars[i] == chars[j]){
                j++;
            }

            // bhar a gaye loop se matlab diffrent char mila ya pura array traverse ho gaya
            chars[ansIndex++] = chars[i]; // old char store karane ke liye

            int count = j-i;

            if( count > 1){
                string temp = to_string(count);

                for( char ch : temp ){
                    chars[ansIndex++] = ch;
                }
            }
            i=j;
        }
        return ansIndex;
    }
};