#include <iostream>
using namespace std;

int input(string input){
    int output;
    cout << "Masukkan nilai " << input << ": "; cin >> output;
    return output;
}

int EGCD(int m, int n){
    int r;
    while (n != 0){
        r = m % n;
        m = n;
        n = r;
    }
    return m;
}

int main(){
    int m = input("m");
    int n = input("n");
    int fpb = EGCD(m,n);

    cout << "FPB dari " << m << " dan " << n << " adalah: " << fpb << endl;

    return 0;
}