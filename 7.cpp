#include <iostream>
using namespace std;

long int pseudo_generator(int m = 25173, int i = 13849,
                         int c = 65537, int num = 1){
    long int s = 0;
    for(i; i < i + num; i++)
        s = (m*s + i) % c;
    return s;
}

int main(){
    cout << pseudo_generator();
    return 0;
}