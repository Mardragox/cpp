#include <iostream>

using namespace std;

void cztery() {
    int tab[80];
    int suma = 0;
    int licznik = 0;

    srand(time(NULL));

    for (int i = 0; i < 80; i++) {
        tab[i] = (rand() % 100) + 1;
    }

    for (int j = 0; j < 80; j++) {
        if (tab[j] >= 10 && tab[j] <= 50) {
            cout << tab[j] << " ";
            suma += tab[j];
            licznik++;
        }
    }

    if (licznik > 0) {
        double srednia = static_cast<double>(suma) / licznik;
        cout << "Srednia liczb: " << srednia << endl;
    } else {
        cout << "W tablicy nie ma liczb z przedzialu [10, 50]." << endl;
    }
}

int main() {
    cztery();
    return 0;
}
