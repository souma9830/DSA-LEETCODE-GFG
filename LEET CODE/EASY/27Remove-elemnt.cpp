class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size= nums.size();
        int j=0;
        for(int i=0;i<size;i++){
            if(nums[i]!=val){
                nums[j]=nums[i];
                j++;
            }
        }
        return j;
        
    }
};

// For run in vs code

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the array size";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter The array Element ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int del;
    cout<<"Enter the Number which you want to delete";
    cin>>del;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==del){
            count++;
        }
    }

    cout<<"The value of count is "<<count;
    cout<<endl;
    int ele=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=del){
            cout<<arr[i]<<" ";
            ele++;
        }
    }
    cout<<endl;
    cout<<"The element are "<<ele;
    
}