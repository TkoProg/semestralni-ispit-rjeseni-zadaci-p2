#include <iostream>
#include <vector>

using namespace std;

// Poprilicno EREGANTOOOOO rjesenje, svidja mi se

double F(vector<double> &v) {
    double suma = 0;
    for(int i = 1; i < v.size() + 1; i++) {
        double nazivnik = 0;
        for(int j = 0; j < i; j++) {
            nazivnik += v[j];
            if(nazivnik == 0) throw domain_error("Dijeljenje sa nulom nije definisano.");
        }
        suma += 1/nazivnik;
    }
    return suma;
}

int main() {
    try {
        vector<double> v={1,-1,40,10,2};
        cout.precision(5);
        cout<<F(v);
    }
    catch(domain_error &poruka) {
        cout<<poruka.what();
    }
}