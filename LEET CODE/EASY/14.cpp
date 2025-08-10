class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(n==1) return strs[0];
        sort(strs.begin(), strs.end());
        string last=strs[n-1];
        string first=strs[0];
        string s="";
        for(int i=0;i<min(last.size(), first.size());i++){
            if(first[i]==last[i]){
               s+=first[i];
            }
            else return s;
        }
        return s;
        
    }
};