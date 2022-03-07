#include <iostream>
using namespace std;
int main()
{
    int a, b, c, z;
    cin >> a >> b >> c;
    z = a + b + c;
    if (z >= 80) {
        cout << "A" << endl;
    }
    else if (z >= 75) {
        cout << "B+" << endl;
    }
    else if (z >= 70) {
        cout << "B" << endl;
    }
    else if (z >= 65) {
        cout << "C+" << endl;
    }
    else if (z >= 60) {
        cout << "C" << endl;
    }
    else if (z >= 55) {
        cout << "D+" << endl;
    }
    else if (z >= 50) {
        cout << "D" << endl;
    }
    else if (z >= 0) {
        cout << "F" << endl;
    }
    return 0;
}