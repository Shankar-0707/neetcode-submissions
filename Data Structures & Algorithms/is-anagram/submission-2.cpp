class Solution {
public:
    bool isAnagram(string s, string t) {
        // O(n) Solution of Time and O(1) Space 
        vector<int> freq(26, 0);

        for(char ch : s){
            freq[ch - 'a']++;
        }

        for(char ch : t){
            freq[ch - 'a']--;
        }

        for(int n : freq){
            if(n != 0) return false;
        }

        return true;
    }
};
