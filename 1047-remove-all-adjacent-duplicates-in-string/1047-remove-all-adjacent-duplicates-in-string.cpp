class Solution {
public:
    string removeDuplicates(string s) {
        string result = "";
        for(int i=0; i<s.length(); i++){
            if(result.empty() || result.back() != s[i]){
                result.push_back(s[i]);
            }else{
                result.pop_back();
            }
        }
        return result;
    }
};