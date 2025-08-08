#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string str="i am a boy ";
    stringstream s(str);
    string temp;
    vector<string> ss;
    while(s>>temp){
        ss.push_back(temp);
    }
    int n= ss.size();
    string real=ss[n-1];
    int len= real.size();
    cout<<len;
}

//leetcode
class Solution {
public:
    int lengthOfLastWord(string s) {
    stringstream str(s);
    string temp;
    vector<string> ss;
    while(str>>temp){
        ss.push_back(temp);
    }
    int n= ss.size();
    string real=ss[n-1];
    int len= real.size();
    return len;
    }
};
