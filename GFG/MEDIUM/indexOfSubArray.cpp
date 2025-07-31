#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Array size";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the array element"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int target;
    cout<<"Enter your target";
    cin>>target;


    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum==target){
                cout<<i<<" ";
                cout<<j;
                return 0;
            }
            
        }
       
    }
     cout<< "-1";


}