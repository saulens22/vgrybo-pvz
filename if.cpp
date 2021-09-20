#include <iostream>
using namespace std;

int main () {
    int a, b, suma;
    float k;
    cin >> k;
    if (k > 2.5) {
         cout << "> 2.5" << endl;
    }
    if (k > 0) {
            cout << "Teigiamas" << endl;
    }
    else if (k == 0) {
            cout << "Nulis" << endl;
    }
    else {
        cout << "Neigiamas" << endl;
    }
    return 0;
}

int main2 () {
    float a, b;
    cin >> a >> b;
    cout << a / b << endl;
    return 0;
}
duoti 3 pazymiai a, b, c. Ar ju vidurkis >= 4? TAIP / NE
