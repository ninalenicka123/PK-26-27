#include <iostream>

using namespace std;

long long fibonacci(int N){
    
    if (N==0) return 0;
    if (N==1) return 1;
    return fibonacci(N-1) + fibonacci(N-2);
}

int main(){

    int N;
    cout << "N:";
    cin >> N;
    if (N<0){
        cout << "N musi być nieujemne" << endl;
        return 0;
    }
    cout << "fib(" << N << ") = " << fibonacci(N) << endl;

    return 0;
}