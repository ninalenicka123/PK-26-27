#include <iostream>
#include <iomanip>

using namespace std;

main(){

    double p, j;
    cout << "Podaj wartość ciśnienia: ";
    cin >> p;
    if (p<0){
        cout << "Wartość nie może być ujemna" << endl;
        return 0;
    }
    cout << "podaj jednostkę [1] kPa [2] hPa: ";
    cin >> j;
    if (j!=1 && j!=2){
        cout << "Niepoprawny wybór jednostki" << endl;
        return 0;
    }
    double wynik;
    cout << fixed << setprecision(2);
    if (j==1){
        wynik = p * 10;
        cout << p << " kPa = " << wynik << " hPa" << endl;
    }
    if (j==2){
        wynik = p / 10;
        cout << p << " hPa = " << wynik << " kPa" << endl;
    }




    return 0;
}