#include<iostream>
#include <climits>
using namespace std;
int main(){
    int x;
    cin>>x;
    int num=x;
    int sum=0;
    int remainder;
    if(x<0){
        cout<<"Not Palindrome";
    }
    while(x>0){
        remainder=x%10;
         if (sum > (INT_MAX - remainder) / 10) {
                return false; 
            }

        sum=sum*10+remainder;
        x/=10;
    }
    if(num==sum){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not plaindrome";
    }
}