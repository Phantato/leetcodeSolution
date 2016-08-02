class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer;
        int len = nums.size();
        unordered_map<int, int> map;
        unordered_map<int, int>::iterator pos;
        for(int i = 0; i < len; i++) {
            pos = map.find(nums[i]);
            if(pos != map.end()){
                answer.push_back(pos->second);
                answer.push_back(i);
                break;
            }else{
                map[target - nums[i]] = i;
            }
        }
        return answer;
    }
};
