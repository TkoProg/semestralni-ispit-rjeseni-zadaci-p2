#include <iostream>
#include <set>

using namespace std;

// Ponovo Adisov zadatak, stvarno nemam kuveta da pokusavam uciti ovo sad lol

template<typename tip>
bool nalazi_se(const set<tip>& s, tip a) {
    for (auto it(s.begin()); it != s.end(); it++)
        if (*it == a)
            return true;
    return false;
}

template<typename tip>
set<tip> f(const set<tip>& s1, const set<tip>& s2) {
    set<tip> razlika;
    for (auto it(s1.begin()); it != s1.end(); it++)
        if (!nalazi_se(s2, *it))
            razlika.insert(*it);
    for (auto it(s2.begin()); it != s2.end(); it++)
        if (!nalazi_se(s1, *it))
            razlika.insert(*it);
    return razlika;
}

int main() {
    int na(0);
    std::cin >> na;
    set<double> A;
    for (int i(0); i < na; i++) {
        double x;
        std::cin >> x;
        A.insert(x);
    }
    int nb(0);
    std::cin >> nb;
    set<double> B;
    for (int i(0); i < nb; i++) {
        double x;
        std::cin >> x;
        B.insert(x);
    }
    set<double> C = f(A, B);
    for (auto it(C.begin()); it != C.end(); it++)
        cout << *it << " ";
    return 0;
}