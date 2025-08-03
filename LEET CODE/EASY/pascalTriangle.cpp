#include<iostream>
#include<vector>
using namespace std;
int main(){
    int row;
    cout<<"Enter the Number of Rows you want";
    cin>>row;
    vector< vector<int>> v;
    for(int i=1;i<=row;i++){
        vector<int> a(i);
        v.push_back(a);
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i){
                v[i][j]=1;
            }
            else{
                v[i][j]= v[i-1][j]+v[i-1][j-1];
            }
        }
    }
    for(int i=0;i<row;i++){
    for(int s=0;s<row-i-1;s++){
        cout<<" ";
    }
    for(int j=0;j<=i;j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
}


}

// for leetcode
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector< vector<int> > res;
        int m=numRows;
        for(int i=0;i<m;i++){
            vector<int> a(i+1);
            res.push_back(a);
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<=i;j++){
                if(j==0 || j==i){
                    res[i][j]=1;
                }
                else{
                   res[i][j]=res[i-1][j]+res[i-1][j-1];
                }
            }
        }
        return res ;
        
    }
};