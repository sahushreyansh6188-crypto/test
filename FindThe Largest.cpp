#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"HOW MANY NUMBERS YOU WANT TO ENTER ?? "<<endl;
    cin>>n;
    int no;
    int i=1;
    int largest=-(2)^31;
    while(i<=n){
        cin>>no;
        if (no>largest){
            largest=no;
        }
        i=i+1;
    }
    cout<<"YOUR LARGEST NO. : "<<largest<<endl;
    return 0;
}
/*                              OR                             */
#include <iostream>
#include <climits>//this validates the min and max limits of a particular bucket
using namespace std;
int main(){
    int n;
    cout<<"HOW MANY NUMBERS YOU WANT TO ENTER ?? "<<endl;
    cin>>n;
    int no;
    int i=1;
    int largest=INT_MIN;//INT_MIN == -2^31 , INT_MAX == (2^31)-1
    while(i<=n){
        cin>>no;
        if (no>largest){
            largest=no;
        }
        i=i+1;
    }
    cout<<"YOUR LARGEST NO. : "<<largest<<endl;
    return 0;
}