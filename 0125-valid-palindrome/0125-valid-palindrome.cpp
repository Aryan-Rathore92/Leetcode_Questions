class Solution {
private:
    bool validCh(char ch){
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
            return 1;
        }
        return 0;
    }

    char toLoweCase(char ch){
       if( (ch >= 'a' && ch <= 'z')){
        return ch;
       }else{
        return ch - 'A' + 'a';
       }
    }

    bool ValidPalindrome(string a){
        int i = 0;
        int j = a.length()-1;

        while( i <= j ){
           if(a[i] != a[j]){
               return 0;
            }else{
                i++;
                j--;
            }
        }
        return 1;
    }

public:
    bool isPalindrome(string s) {
        string temp = "";

        // copying characters of one string to another string
        for(int i=0; i < s.length(); i++){
            if(validCh(s[i])){
                temp.push_back(s[i]);
            }
        }
        
        // convert all characters in lowercase
        for(int i=0; i<temp.length(); i++){
             temp[i] = toLoweCase(temp[i]);
        }

        // check palindrome or not
        return ValidPalindrome(temp);
    }
};