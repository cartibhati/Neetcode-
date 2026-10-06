class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
        return false;
        unordered_map<char,int>mp1;
        for(char c: s)
        mp1[c]++;
        for(char c:t)
        mp1[c]--;
        for(auto& [ch,count] : mp1){
            if(count!=0)
            return false;
        }
        return true;
    }
};