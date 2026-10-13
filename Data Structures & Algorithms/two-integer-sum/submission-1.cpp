class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // hashing continuos

        int n = nums.size();
        unordered_map<int,int> indexes; // store values and their indexes

        for(int i=0; i<n; i++){
            int curr_val = nums[i];
            int req_val = target - curr_val;

            if(indexes.find(req_val) != indexes.end()){
                return {indexes[req_val], i};
            }
            else{
                indexes[curr_val] = i;
            }
        }

        return {-1,-1};
    }
};
