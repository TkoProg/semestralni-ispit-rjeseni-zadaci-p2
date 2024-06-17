#include <iostream>
#include <vector>
#include <exception>

using namespace std;

// Poprilicno EREGANTOOO rijesenje sta ja znam, it works lmao

double F(vector<double> &v) {
    double rezultat = 0, broj = 0;
    for(int i = v.size() - 1; i >= 0; i--) {
        if((v[i] + broj) < 0) {
            throw domain_error("Podkorijena velicina je negativna.");
        }
        rezultat = sqrt(v[i] + broj);
        broj = rezultat;
    }
    return rezultat;
}

int main() {
    try {
        // Iz nekog razloga ova deklaracija za vektor mi ne radi u kompajleru ali ok...
        vector<double> v{1, 4, 9, -90, 3, 77};
        cout.precision(5);
        cout<<F(v);
        return 0;
    }
    catch(domain_error &poruka) {
        cout<<poruka.what();
        return 0;
    }
}