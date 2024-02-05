#include <iostream>
#include <string>

using namespace std;

string sensorKata(string kalimat, string kata_yang_disensor, char karakter_untuk_sensor) {
    size_t pos = kalimat.find(kata_yang_disensor);
    
    while (pos != string::npos) {
        kalimat.replace(pos, kata_yang_disensor.length(), kata_yang_disensor.length(), karakter_untuk_sensor);
        pos = kalimat.find(kata_yang_disensor, pos + 1);
    }

    return kalimat;
}

int main() {
    string kalimat, kata_yang_disensor;
    char karakter_untuk_sensor;

    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    cout << "Masukkan kata yang akan disensor: ";
    cin >> kata_yang_disensor;

    cout << "Masukkan karakter untuk sensor: ";
    cin >> karakter_untuk_sensor;

    string hasil = sensorKata(kalimat, kata_yang_disensor, karakter_untuk_sensor);

    cout << "Output: " << hasil << endl;

    return 0;
}
