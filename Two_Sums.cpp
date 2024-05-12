//Two-pass Hash Table
//Runtime: 7 ms, faster than 85.90% of C++ online submissions for Two Sum.
//Memory Usage: 15.54 MB, less than 8.35% of C++ online submissions for Two Sum.
//time: O(NlogN), space: O(N)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums,   int target) {
    unordered_map<int, int> numMap; // Hash Map
    for (int i = 0; i < nums.size(); i++) {
        numMap[nums[i]] = i;
    }
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.count(complement) && numMap[complement] != i) {
            return {i, numMap[complement]};
        }
    }
    return {};
  }
};
