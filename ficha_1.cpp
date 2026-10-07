#include <iostream>

using namespace std;

int main () {

    int n;

    cout << "Me diga um numero \n";
    cin >> n;

    if (n<0) {
        cout << "Numero negativo";
    }

    else if (n == 0) {
        cout << "Numero neutro";
    }

    else if (n<100) {
        cout << "Numero positivo pequeno";
    }

    else if (n >= 100) {
        cout << "Numero enorme";
    }


    return 0;
}
