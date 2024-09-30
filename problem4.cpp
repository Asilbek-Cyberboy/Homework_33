#include <iostream>
using namespace std;
int main() {
    int n, x, floor = 1;
    cin>>n>>x;
    if(n==1 || n==2) {
        cout<<1;
    }
    else {
        n=n-2;
        while(n>0) {
            n=n-x;
            floor++;
        }
        cout<<floor<<endl;
    }
    return 0;
}
