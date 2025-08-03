#include<iostream>
#include<vector>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter the array row size";
    cin>>row;
    cout<<endl<<"Enter the Array col size";
    cin>>col;
    vector< vector<int> > v(row, vector<int> (col));
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++)
        cin>>v[i][j];
    }

    int ser=1;
    int maxc=0;
    int idx=-1;
    for(int i=0;i<row;i++){
        int count=0;
        for(int j=0;j<col;j++){
            if(v[i][j]==ser){
                count++;
            }
        }
        if(count>maxc){
           maxc=count;
           idx=i;
            
        }
    }

    cout<<"The row is "<<idx;
}

//for gfg
// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int n=arr.size();
        if(n==0) return -1;
        int m=arr[0].size();
        if(m==0) return -1;
        int mcount=0;
        int idx=-1;
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<m;j++){
                if(arr[i][j]==1){
                    count++;
                }
            }
            if(count>mcount){
                mcount=count;
                idx=i;
            }
        }
        return idx;
        
    }
};