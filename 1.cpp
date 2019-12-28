#include <iostream>
#include <fstream>

using namespace std;

int main() {

    int p = 0, sum = 0;
    ofstream conid("C:\\Users\\SONY\\Desktop\\confident.txt");
    for (int i = 0; i < 10; i++){
        cin >> p;
        conid << p << ' ';
    }
    conid.close();
    ifstream cnfit("C:\\Users\\SONY\\Desktop\\confident.txt");
    for(int i = 0; i < 10; i++){
        cnfit >> p;
        sum += p;
    }
    cout << sum << endl;
    cnfit.close();
    return 0;
}