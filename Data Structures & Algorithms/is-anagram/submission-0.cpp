class Solution {
public:
    bool isAnagram(string s, string t) {

        int st1[26] = {0};
        int st2[26] = {0};


        for(char ch : s){
            st1[ch-'a']++;
        }

        for(char ch : t){
            st2[ch-'a']++;
        }

        for(int i=0;i<26;i++){
            if(st1[i]!=st2[i]){
                return false;
            }
        }

        return true;

    }
};
