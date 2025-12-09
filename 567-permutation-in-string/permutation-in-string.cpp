class Solution {
public:

    bool isFreqSame(int freq1[], int freq2[]){
        for(int i=0;i<26;i++){
            if(freq1[i]!=freq2[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26]={0};

        for(int i=0;i<s1.length();i++){
            freq[s1[i]-'a']++;
        }
        int wind_size=s1.length();

        for(int i=0;i<s2.length();i++){
            int wind_index=0;
            int idx=i;
            int wind_freq[26]={0};

            while(wind_index<wind_size && idx<s2.length()){
                wind_freq[s2[idx]-'a']++;
                wind_index++;
                idx++;
            }

            if(isFreqSame(freq, wind_freq)){
                return true;
            }
        }
        return false;
        
    }
};