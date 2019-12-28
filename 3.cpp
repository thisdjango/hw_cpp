#include <iostream>
#include <cmath>
using namespace std;

float square_rectangle(float a, float b){
    return a*b;
}
double square_triangle(float a, float h){
    return 1.0/2.0 * a * h;
}
double square_circle(double r){
    return M_PI * pow(r, 2);
}

int main() {
    string command;
    cout << "Input rectangle/triangle/circle" << endl;
    getline(cin, command);
    if (!command.compare("rectangle")) {
        float a, b;
        cin >> a >> b;
        cout << "square_rectangle: " << square_rectangle(a, b);
    }
    else if (!command.compare("triangle")) {
        float a1, h;
        cin >> a1 >> h;
        cout << "square_triangle: " << square_triangle(a1, h);
    }
    else if (!command.compare("circle")) {
        double r;
        cin >> r;
        cout << square_circle(r);
    }
    return 0;
}