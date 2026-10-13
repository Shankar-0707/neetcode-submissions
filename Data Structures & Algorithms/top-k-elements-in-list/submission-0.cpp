class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> freq;

        for(int n : nums){
            freq[n]++;
        }

        priority_queue<pair<int,int>> pq;

        for(auto p : freq){
            pq.push({p.second, p.first});
        }

        vector<int> ans;

        while(k--){
            auto top = pq.top();
            pq.pop();

            ans.push_back(top.second);
        }

        return ans;
    }
};
