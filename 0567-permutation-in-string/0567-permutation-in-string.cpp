class Solution {
private: bool checkEqual(int a[26], int b[26]){
    for(int i=0; i<26; i++){
        if(a[i] != b[i]){
            return 0;
        }
    }
    return 1;
}
public:
    bool checkInclusion(string s1, string s2) {

        // Store count at index
        int count1[26] = {0};
        for(int i=0; i<s1.length(); i++){
            int index = s1[i] - 'a';
            count1[index]++;
        }

        // traversing s2 by creating window and runing first time
        int i = 0;
        int windowSize = s1.length();
        int count2[26] = {0};

        while( i < windowSize && i < s2.length() ){
            int index = s2[i] - 'a';
            count2[index]++;
            i++;
        }

        // check both arrayes count values stored is equal or not
        if(checkEqual(count1, count2)) return 1;

        while ( i < s2.length()){
            char newChar = s2[i]; // that holding next char address
            int index = newChar - 'a';
            count2[index]++;

            char oldChar = s2[i-windowSize];// that holding index of first removing char
            index = oldChar - 'a';
            count2[index]--; // that is doing convert 1 into again 0

            i++;

            if(checkEqual(count1, count2)) return 1;
        }

        return 0;

    }
};
