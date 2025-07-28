#include<iostream>
#include<math.h>
using namespace std;
int main(){
        int row,colm;
        cout<<"Enter the row and coloum number of the first matrix ";
        cin>>row>>colm;
        int arr[row][colm];
        cout<<"Enter the Array Element";
        for(int i=0;i<row;i++){
            for(int j=0;j<colm;j++){
                cin>>arr[i][j];
            }
        
        }

        int res[colm][row];
        for(int i=0;i<colm;i++){
            for(int j=0;j<row;j++){
                cout<<arr[j][i]<<" ";
            }
            cout<<endl;
        }
    }