#include<iostream>
using namespace std;
int main(){
    int row1,col1;
    cout<<"Enter The Row and Colum Number of the first matrix ";
    cin>>row1>>col1;
    int arr1[row1][col1];
    cout<<"Enter The array Element-";
    cout<<endl;
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            cin>>arr1[i][j];
        }
    }
cout<<endl;
   
    int minr=0;
    int minc=0;
    int maxr=row1-1;
    int maxc=col1-1;
    
    while(minr<=maxr && minc<=maxc){
        for(int j=minc;j<=maxc;j++){
            cout<<arr1[minr][j]<<" ";
        }
        minr++;
        if(minr>maxr || minc>maxc) break;
        for(int k=minr;k<=maxr;k++){
            cout<<arr1[k][maxc]<<" ";
        }
        maxc--;
         if(minr>maxr || minc>maxc) break;
        for(int i=maxc;i>=minc;i--){
            cout<<arr1[maxr][i]<<" ";
        }
        maxr--;
         if(minr>maxr || minc>maxc) break;
        for(int m=maxr;m>=minr;m--){
            cout<<arr1[m][minc]<<" ";
        }
        minc++;

    }

}