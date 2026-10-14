class Solution {
public:

    string encode(vector<string>& strs) {
       string curr = "";

       for(string str : strs){
            curr+= str;
            curr+="#";
       }
        cout << curr;
       return curr;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        string curr = "";
        if(s.length() == 0) return {""};
        for(char ch : s){
            if(ch == '#'){
                if(curr.length() > 0){
                    ans.push_back(curr);
                    curr = "";
                }
                else{
                    ans.push_back("");
                }
            }
            else{
                curr+=ch;
            }
        }

        return ans;
    }
};
