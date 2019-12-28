#include <iostream>
using namespace std;

int sign(int x){
    int sign = 0;
    if (x > 0)
        sign = 1;
    else if (x < 0)
        sign = -1;
    return sign;
}

int main() {
    int a;
    cin >> a;
    cout << sign(a);
    return 0;
}