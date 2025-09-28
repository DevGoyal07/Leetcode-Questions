class Solution {
public:

    void ToLowercase (string &s){
        for(int i=0;i<s.length();i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i] = s[i] -'A'+'a';
            }
        }
    }
    bool isPalindrome(string &s) {

        ToLowercase(s);
        int start = 0;
        int end = s.length() -1;

        while(start <=end){
            bool check1 = (s[start]>='a'&&s[start]<='z') || (s[start]>='0'&& s[start]<='9');
            bool check2 = (s[end]>='a'&&s[end]<='z') || (s[end]>='0'&& s[end]<='9');

            if(check1 && check2){
                if(s[start] != s[end]){
                    return 0;
                }
                else{
                    start++;
                    end--;
                }
            }
            else if(!check1){
                start++;
            }
            else if(!check2){
                end--;
            }
        }
        return 1;
        
    }
};