class Solution {
public:
    string reverseString(string s) {
        char ch;
        string::iterator begin = s.begin(), end = s.end()-1;
        while(begin < end) {
            ch = *begin;
            *begin = *end;
            *end = ch;
            begin++;
            end--;
        }
        return s;
    }
};
