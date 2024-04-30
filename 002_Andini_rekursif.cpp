#include <iostream>
using namespace std;

int input(string input){
    int output;
    cout << "Masukkan nilai " << input << ": "; cin >> output;
    return output;
}

int EGCD(int m, int n){
    if (n == 0){
        return m;
    } else {
        return EGCD(n, m % n);
    }
}

int main(){
    int m = input("m");
    int n = input("n");
    int fpb = EGCD(m,n);

    cout << "FPB dari " << m << " dan " << n << " adalah: " << fpb << endl;

    return 0;
}