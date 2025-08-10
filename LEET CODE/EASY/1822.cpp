#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter The size of the array";
    cin>>n;
    cout<<"Enter The array element";
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int product=1;
    for(int i=0;i<n;i++){
        product*=v[i];
    }
    if(product<0) cout<<"negetive";
    else if(product==0) cout<<"zero";
    else cout<<"Positive";
}



//leetcode


class Solution {
public:
    int arraySign(vector<int>& nums) {
        long long product=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                product*=-1;
            }
            if(nums[i]==0) return 0;
        }
        return product;
    }
};