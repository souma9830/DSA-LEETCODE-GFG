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
    int sign=1;
    for(int i=0;i<n;i++){
        if(v[i]<0) sign*=-1;
        if(v[i]==0) {
            cout<<"0";
            break;
        }
    }
        if(sign>0) cout<<"1";
        else cout<<"-1";
}



//leetcode


// class Solution {
// public:
//     int arraySign(vector<int>& nums) {
//         long long product=1;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]<0){
//                 product*=-1;
//             }
//             if(nums[i]==0) return 0;
//         }
//         return product;
//     }
// };