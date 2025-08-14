#include <iostream>
using namespace std;

int main() {
    // code here
    bool ispri=true;
    int n;
    cin>>n;
    if(n==1) cout<<"It is not Prime";
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            ispri=false;
            break;
        }
        
    }
    if(ispri) cout<<"True";
    else cout<<"False";

    return 0;
}
