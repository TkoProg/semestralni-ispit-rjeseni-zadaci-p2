#include <iostream>
#include <functional>
#include <cmath>
#include <iomanip>

using namespace std;

// Jos jedan od adisovih zadataka, u gasu smo... (I AINT DOING THIS DAWG)
// Ovdje nista ne radi cini mi se, a ne popravlja mi se, ne ucim za desetku lol

function<double(double)> f(function<double(double)> f1, function<double(double)> f2) {
    return [f1, f2](double x) {
    return f2(f1(x));
    };
}

double f1(double x) {
    return sin(x);
}

int main() {
    double x;
    cin >> x;
    auto g(f(f1, [](double x) {
        return 5 * x * x * x * x - 2 * x * x * x + x * x - 1;
    }));
    cout << setprecision(5) << g(x);
    return 0;
}