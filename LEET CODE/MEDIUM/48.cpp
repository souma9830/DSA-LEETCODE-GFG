#include<iostream>
#include <utility> 
using namespace std;
int main(){
     int row,col;
     cout<<"Enter The Number of Rows and colum";
     cin>>row>>col;
     int arr[row][col];
     cout<<endl;
     cout<<"Enter the array element"<<endl;
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
     }
     for(int i=0;i<row;i++){
        for(int j=i+1;j<col;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
     }
    cout<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col/2;j++){
            swap(arr[i][j],arr[i][col-1-j]);
        }
    }
      cout<<"After 90 Degree of Rotation the matrix is ";
    cout<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
       
    }   

}
