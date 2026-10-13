class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       // By using hash map 
       unordered_map<int,int> freq; 
       int n = nums.size();

       for(int num : nums){
            if(freq[num] > 0){
                // it means i is appear before 
                return true;
            }
            else{
                freq[num]++;
            }
       }
       return false;
    }
};