#include <iostream>
using namespace std;
int main() {
    int  N, count =0;
    cin>>N;
    while(count<N) {
        count++;
        if(count%3==0 || count%10==3) {
            N++;
        }
    }
    cout<<count;
    return 0;
}
