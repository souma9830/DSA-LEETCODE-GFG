class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        string str=s;
        reverse(s.begin(), s.end());
        if(str==s) return true;
        else return false;
    }
};