#include <iostream>

using namespace std;

float dodaj(float a , float b ){
    return a + b;
}
float odejmij(float a, float b){
    return a - b;
}
float pomnoz(float a, float b){
    return a * b;
}
float podziel(float a, float b){
    return a/b;
}

int main(){

    float a, b;
    char dzial;
    cout << "Działanie: ";
    cin >> a >> dzial >> b;
    float wynik;
    if (dzial == '+')
        wynik = dodaj(a,b);
    else if (dzial == '-')
        wynik = odejmij(a,b);
    else if (dzial == '*')
        wynik = pomnoz(a,b);
    else if (dzial == '/')
        wynik = podziel(a,b);
    else {
        cout << "Nieprawidłowe działanie" << endl;
        return 0;
    }
    cout << "Wynik: " << wynik << endl;


    return 0;
}
