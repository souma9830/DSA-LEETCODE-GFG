// User function Template for C++

class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
         int n=arr.size();
        int last=arr[n-1];
        for(int i=n-1;i>0;i--){
            arr[i]=arr[i-1];
        }
        arr[0]=last;
    }
};


//for vs code

#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int last=arr[4];
    for(int i=4;i>0;i--){
      arr[i]=arr[i-1];
    }
   arr[0]=last;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}