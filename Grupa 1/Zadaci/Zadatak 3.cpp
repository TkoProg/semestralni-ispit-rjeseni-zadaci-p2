#include <iostream>
#include <vector>
#include <functional>

// Ovo nije moj code, ovo je Adisov. Ja ne zelim da znam kako se ovaj zadatak radi uopste lmao...

template<typename T>
std::function<T(T)> f(const std::vector<T>& v) {
    return [v](T x) -> T {
        T suma = 0;
        T temp = 1;

        for (int i = 0; i < v.size(); i++) {
            suma += v[i] * temp;
            temp *= x;
        }

        return suma;
    };
}

int main() {
    int n;
    std::cin >> n;

    double x;
    std::vector<double> v(n);

    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    std::cin >> x;

    auto F = f<double>(v);

    std::cout << F(x);

    return 0;
}