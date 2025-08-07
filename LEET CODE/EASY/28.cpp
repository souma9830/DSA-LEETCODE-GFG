class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=needle.length();
        int m=haystack.length();
        if(n==0) return 0;
        for(int i=0;i<=m-n;i++){
            string sub= haystack.substr(i,n);
            if(sub==needle){
                return i;
            }
        }
        return -1;
      
           
    }

};