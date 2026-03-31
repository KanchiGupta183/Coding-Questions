class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        if (strs.empty()){
            return "";
        }
        string strs1 = strs.front();
        string strs2 = strs.back();

        string result = "";
        for(int i = 0; i < strs1.length() && i < strs2.length(); ++i){
            if (strs1[i] == strs2[i]) {
                result += strs1[i];
            }
            else break;
        }
        return result;
    }
};