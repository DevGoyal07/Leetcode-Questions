class Solution {
public:
    string reverseWords(string s) {
        
        int index=0;
        int start =0;
        
        while(index<=s.length()){
            if(s[index] ==' ' || s[index] == '\0'){
                
                int end = index-1; 

                while(start<=end){
                    swap(s[start],s[end]);
                    start++;
                    end--;

                }
                start =index+1;
            }
           
            index++;
        }
        return s;

        
    }
};