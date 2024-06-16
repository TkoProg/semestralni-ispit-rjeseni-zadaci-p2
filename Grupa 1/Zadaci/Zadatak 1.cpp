#include <iostream>
#include <cmath>

using namespace std;

// Mislim da je poprilicno EREGANTO rjesenje... Nvm... Adi bi bolje uradio lmao

// Nisam koristio lambda funkcije, fakat mi se ne da uciti kako se koriste...

double F(double f(double), double a, double b, int n) {
    double suma1 = 0, suma2 = 0;
    if (n < 0) n = -n;
    double h = (b-a)/n;

    for(int i = 1; i <= n - 1; i+=2) {
        suma1 += f(a + i * h);
    }

    for(int i = 2; i <= n - 2; i+=2) {
        suma2 += f(a + i * h);
    }

    return (h/3.0)*(f(a) + 4*suma1 + 2*suma2 + f(b));
}

double f1(double x) {
    return 1/x;
}

double f2(double x) {
    return x*x*x;
}

int main() {
    int n;
    double a,b;
    cin>>a>>b>>n;
    cout.precision(5);
    cout<<F(sin,a,b,n)<<" "<<F(f1,a,b,n)<<" "<<F(f2,a,b,n);
    return 0;
}