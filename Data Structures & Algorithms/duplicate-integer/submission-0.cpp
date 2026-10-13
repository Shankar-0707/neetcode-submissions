class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // By using Unordered Set to find duplicates
        unordered_set<int> s(nums.begin(), nums.end()); // direct initialistaion
        int n = nums.size();

        return s.size() == n ? false : true;
    }
};