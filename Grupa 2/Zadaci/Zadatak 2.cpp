#include <iostream>
#include <vector>

using namespace std;

// Mislim da je ovo poprilicno EREGANTOOOO

bool jelProst(int n) {
    if (n == 1) return false;
    if (n == 0) return false;

    for(int i = 2; i <= sqrt(n); i++) {
        if((n % i)!=0) continue;
        else if((n % i)==0) return false;
    }

    return true;
}

void f(int n, int &m, int &k) {
    vector<int> prosti, neprosti;
    int placeholder1 = 0, placeholder2 = 0, broj = 0;

    while(true) {
        if(n <= 0) {
            break;
        }
        broj = n % 10;
        if (jelProst(broj)) prosti.push_back(broj);
        else if (!jelProst(broj)) neprosti.push_back(broj);
        n = n / 10;
    }

    for(int i = prosti.size() - 1; i >= 0; i--) {
        placeholder1 += prosti[i];
        placeholder1 *= 10;
    }
    placeholder1 /= 10;

    for(int i = neprosti.size() - 1; i >= 0; i--) {
        placeholder2 += neprosti[i];
        placeholder2 *= 10;
    }
    placeholder2 /= 10;

    m = placeholder1;
    k = placeholder2;
}

int main() {
    int m = 0, k = 0;
    f(123456789, m, k);
    cout<<m<<" "<<k;
    return 0;
}