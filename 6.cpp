#include <iostream>
using namespace std;

int to_arab(char x){
    int arab = 0;
    switch (x){
        case 'I': arab = 1; break;
        case 'V': arab = 5; break;
        case 'X': arab = 10; break;
        case 'L': arab = 50; break;
        case 'C': arab = 100; break;
        case 'D': arab = 500; break;
        case 'M': arab = 1000; break;
        default: arab = 0; break;
    };
    return arab;
}

int decode(char *rim){
    int res = to_arab(rim[0]);
    char last = rim[0];
    for(int i = 1; i < sizeof(rim); i++){
        res += to_arab(rim[i]);
        if (last == 'I' && (rim[i] == 'V' || rim[i] == 'X')){
            res -= 2;
        }
        last = rim[i];
    }
    return res;
}

int main(){
    int SIZE;
    cout << "Size: " << endl;
    cin >> SIZE;
    char *rim = new char[SIZE];
    for(int i = 0; i < SIZE; i++)
        cin >> rim[i];
    cout << decode(rim);
    delete [] rim;
    return 0;
}