#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the Row Number & col number";
    cin>>n>>m;
    vector< vector<int>> v(n, vector<int>(m));
    cout<<endl<<"Enter The array element ";
    for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
        cin>>v[i][j];
       }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==j || i+j==n-1){
                sum=sum+v[i][j];
            }
        }
    }
    cout<<endl<<"THe sum of the diagonal matrix is "<<sum;
}