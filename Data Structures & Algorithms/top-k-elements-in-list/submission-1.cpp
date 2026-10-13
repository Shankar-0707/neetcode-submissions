class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> freq;

        for(int n : nums){
            freq[n]++;
        }

        vector<vector<int>> bucket(n+1);
        // bucket bna di n+1 isiliye kyoki 
        // ek elem ki max freq size of array bhi ho skta h

        for(auto p : freq){
            int fq = p.second;
            int val = p.first;

            bucket[fq].push_back(val);
        } 

        vector<int> ans;

        for(int i = n; i>=1; i--){
            if(k == 0) break;
            auto vec = bucket[i];
            if(vec.empty()) continue;
            else{
                for(auto num : vec){
                    ans.push_back(num);
                    k--;

                    if(k == 0) break;
                }
            }
        }

        return ans;

    }
};
