#include <iostream>
using namespace std;

int main(){
    int i=0;
    while(i<15)
    {
        if(i==5)
        {
            i=i+1;
            continue;
        }
        i=i+1;
        cout<<i<<endl;
    }
    return 0;
}