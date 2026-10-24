class Solution {
private: 
 array<int,26> checkValidAnagram(string s, array<int, 26> arr){
       
       for(int i=0; i < s.length(); i++){
         char ch = s[i];
         int num  = 0;
         if(ch >= 'a' && ch <= 'z'){
            num = ch - 'a';
         }else{
            num = ch - 'A';
         }

         arr[num]++;
       }
       return arr;
 }
public:
    bool isAnagram(string s, string t) {
        array<int, 26> arr1 = {0};
        array<int, 26> arr2 = {0};

         arr1 = checkValidAnagram(s,arr1);
         arr2 = checkValidAnagram(t, arr2);
        int ans = true;
        for(int i=0; i<26; i++){
            if(arr1[i] != arr2[i]){
                ans = false;
                return ans;
            }
        }
       return ans;
    }
};