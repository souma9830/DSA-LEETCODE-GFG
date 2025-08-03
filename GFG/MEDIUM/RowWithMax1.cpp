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