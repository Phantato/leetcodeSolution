class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int map[256][2]={0}, l = s.size();
        for(int i = 0; i < l; i++) {
            if((map[s[i]][0] != 0 && map[s[i]][0] != t[i]) || (map[t[i]][1] != 0 && map[t[i]][1] != s[i])){
                return false;
            } else {
                map[s[i]][0] = t[i];
                map[t[i]][1] = s[i];
            }
        }
        return true;
    }
};
