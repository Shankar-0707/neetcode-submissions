class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int m = strs.size();
        unordered_map<string, vector<string>> mp;

        for(string str : strs){
            string curr = str;
            sort(curr.begin(), curr.end());
            mp[curr].push_back(str);   
        }

        vector<vector<string>> ans;

        for(auto vec : mp){
            ans.push_back(vec.second);
        }

        return ans;
    }
};
