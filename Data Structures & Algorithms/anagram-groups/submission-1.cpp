class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int m = strs.size();
        unordered_map<int, vector<string>> mp;

        for(string str : strs){
            string curr = str;
            vector<int> freq(26, 0);
            
            for(char ch : curr){
                freq[ch - 'a']++;
            }

            long long key = 0;
            for(int i=0; i<26; i++){
                key+= (i * freq[i]);
            }
            mp[key].push_back(str);   
        }

        vector<vector<string>> ans;

        for(auto vec : mp){
            ans.push_back(vec.second);
        }

        return ans;
    }
};
