#include <iostream>
#include <vector>

using namespace std;

// Ovo rjesenje nije EREGANTO, but it works LMAO

void f(int n, int &m, int &k) {
    vector<int> parni, neparni;
    int cifra, placeholder1 = 0, placeholder2 = 0;
    if(n < 0) n = -n;
    while(true) {
        if(n <= 0) break;
        cifra = n % 10;
        if (cifra % 2 == 0) parni.push_back(cifra);
        else neparni.push_back(cifra);
        n = n / 10;
    }

    if(!parni.empty()) {
        for(int i = parni.size(); i >= 0; i--) {
            placeholder1 += parni[i];
            placeholder1 *= 10;
        }
    }

    if(!neparni.empty()) {
        for (int i = neparni.size(); i >= 0; i--) {
            placeholder2 += neparni[i];
            placeholder2 *= 10;
        }
    }

    m = placeholder1 / 10;
    k = placeholder2 / 10;
}

int main() {
    int n, m = 0, k = 0;
    cin>>n;
    f(n, m, k);
    cout<<m<<" "<<k;
}