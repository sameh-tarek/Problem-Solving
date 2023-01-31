class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        map<char,int>count;
        for(int i=0;i<s.size();i++){
            count[s[i]]++;
            count[t[i]]--;
        }
        for(auto x : count){
            if(x.second)return false;
        }
        return true;
        
    }
};