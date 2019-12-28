#include <iostream>
using namespace std;

void reload(float c[4][2]){
    for (int k = 0; k < 4; k++)
        for (int j = 0; j < 2; j++)
            if (c[k][j] != c[k][j])
                c[k][j] = 0;
}

int main() {
    float a[3][4] =
            {5, 2, 0, 10, 3, 5, 2, 5, 20, 0, 0, 0};
    float c[4][2] =
            {0, 0, 0, 0, 0, 0, 0, 0};
    float b[4][2] =
            {1.2, 0.5, 2.8, 0.4, 5, 1, 2, 1.5};

    float sum = 0, sum1 = 0;
    for (int k = 0; k < 3; k++)
        for (int j = 0; j < 2; j++) {
            for (int i = 0; i < 4; i++)
                c[k][j] += a[k][i] * b[i][j];
        }
    float max_el = c[0][0], min_el = c[0][0];
    int maxi = 1, mini = 1;
    for (int i = 0; i < 3; i++) {
        if (max_el < c[i][0]) {
            max_el = c[i][0];
            maxi = i + 1;
        }
        if (min_el > c[i][0]) {
            min_el = c[i][0];
            mini = i + 1;
        }
    }

    cout << "Point 1" << endl;
    cout << "The best: " << maxi << endl;
    cout << "The worst: " << mini << endl;
    max_el = c[0][0], min_el = c[0][0];
    maxi = 1, mini = 1;
    for (int i = 0; i < 3; i++) {
        if (max_el < c[i][1]) {
            max_el = c[i][1];
            maxi = i + 1;
        }
        if (min_el > c[i][1]) {
            min_el = c[i][1];
            mini = i + 1;
        }
    }
    cout << "Point 2" << endl;
    cout << "The best: " << maxi << endl;
    cout << "The worst: " << mini << endl;
    for (int k = 0; k < 3; k++) {
        sum += c[k][0];
        sum1 += c[k][1];
    }
    cout << "Point 3" << endl;
    cout << "Sum of saled: " << sum << endl;
    cout << "Sum of commission: " << sum1 << endl;
    cout << "Entire sum: " << sum + sum1 << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++)
            cout << c[i][j] << ' ';
        cout << endl;
    }
    return 0;
}