class Solution {
public:
    char findTheDifference(string s, string t) {
        int m=s.length();
        int n=t.length();
        sort(s.begin(), s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<n;i++){
            if(s[i]!=t[i]){
                return t[i];
            }
        }
        return t[t.length() - 1];;
    }
};