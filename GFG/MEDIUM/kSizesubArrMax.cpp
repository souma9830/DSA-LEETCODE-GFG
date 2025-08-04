#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Size of the array is ";
    cin>>n;
    vector<int> v;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k=3;
    int max=INT16_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<i+k;j++){
            if(arr[j]>max){
                max=arr[j];
               
            }
            v.push_back(max);
        }
    }

    for(int i=0;i<7;i++){
        cout<<v[i]<<" ";
    }
}