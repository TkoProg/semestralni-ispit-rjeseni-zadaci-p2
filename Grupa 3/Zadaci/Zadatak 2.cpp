#include <iostream>

using namespace std;

// VERI EREGANTOOOO... Fakat moram prestati sa ovim LMAO

bool jelProst(int n) {
    if (n == 1) return false;
    if (n == 0) return false;

    for(int i = 2; i <= sqrt(n); i++) {
        if((n % i)!=0) continue;
        else if((n % i)==0) return false;
    }

    return true;
}

void f(int n, int &n1, int &n2, int &n3, int &n4) {
    int broj = 0;
    while(true) {
        if(n<=0) {
            break;
        }
        broj = n % 10;
        if(jelProst(broj)) n2 *= broj;
        else if(!jelProst(broj)) n4 *= broj;
        if((broj % 2) == 0) n1 += broj;
        else if((broj % 2) != 0) n3 += broj;
        n = n / 10;
    }
}

int main() {
    int n1 = 0,n2 = 1,n3 = 0,n4 = 1;
    f(1234567, n1,n2,n3,n4);
    cout<<n1<<" "<<n2<<" "<<n3<<" "<<n4;
    return 0;
}