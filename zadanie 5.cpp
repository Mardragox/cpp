#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main() {
    srand(time(NULL));
    int tablica[50];

    for(int i = 0; i < 50; i++) {
        tablica[i] = rand() % 100 + 1;
    }

    for(int j = 0; j < 50; j++) {
        cout << tablica[j] << " ";
    }
    cout<<"\nLiczby całkowite które są kwadratem: ";
    for(int k = 0; k < 50; k++) {
        if(sqrt(tablica[k]) == static_cast<int>(sqrt(tablica[k]))) {
            cout << tablica[k] << " ";
        }
    }

    return 0;
}
