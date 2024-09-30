#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int i = 0; i <t; i++ ) {
        int reverse = 0, rem, N;
        cin>>N;
        while(N!=0) {
            rem = N % 10;
            cout<<rem<<" ";
            N /=10;
        } if(N==0) {
            cout<<endl;
        }
    }
    return 0;
}