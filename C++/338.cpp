class Solution {
public:
    vector<int> countBits(int num) {
        int i = 1, j = 0;
        vector<int> answer(num + 1, 0);
        while(i <= num) {
            answer[i++] = answer[j++] + 1;
            if(!(i & (i-1))) {
                j = 0;
            }
        }
        return answer;
    }
};
