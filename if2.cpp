#include <iostream>
using namespace std;
// duoti 3 pazymiai a, b, c. Ar ju vidurkis >= 4? TAIP / NE

int main () {
    int pazymys1, pazymys2, pazymys3, vidurkis;
    cin >> pazymys1 >> pazymys2 >> pazymys3;
    vidurkis = (pazymys1 + pazymys2 + pazymys1) / 3;
    if (vidurkis >= 4) {
        cout << "Teigiamas" << endl;
    }
    else {
        cout << "Neigiamas" << endl;
    }
    return 0;
}
