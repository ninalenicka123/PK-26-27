#include <iostream>

using namespace std;

int fib (int liczba){

    int ciag;
    int a =0, b=1;
    do {
        ciag = a + b;
        a = b;
        b = ciag;
    }
    while (b<=liczba);
    return ciag;
}

int main(){

    int liczba;
    cout << "Podaj wartość: ";
    cin >> liczba;
    if (liczba<0){
        cout << "Wartość nie może być ujemna";
        return 0;
    }
    cout << "Następny wyraz ciągu to: " <<fib(liczba);



    return 0;
}