#include <iostream>
using namespace std;

int main() {
    int i;
    int n,no;
    cin>>n;
    for( i=2; i<=n; i++){
        for(no=2; no<i; no++){
            if (i%no==0){
                break;
            }
            no=no+1;  
        }
        if (no==i){
            cout<<no<<" ";
        }
    }
    return 0;
}