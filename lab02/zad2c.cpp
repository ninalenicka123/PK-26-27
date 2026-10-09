#include <iostream>

using namespace std;

int main(){
    
    int liczba;
    cout << "Podaj liczbę: ";
    cin >> liczba;
    cout << "Parzysta: ";
    if (liczba%2==0)
        cout << "TAK" << endl;
    else
        cout << "NIE" << endl;

    cout << "Podzielna przez 8: ";
    if (liczba%8==0)
        cout << "TAK" << endl;
    else
        cout << "NIE" << endl;
    
    cout << "Podzielna przez 16: ";
    if (liczba%16==0)
        cout << "TAK" << endl;
    else
        cout << "NIE" << endl;
    
    cout << "Ósemkowo: "<< oct << liczba << endl;
    cout << "Szesnastkowo: "<< hex << liczba << endl;
    return 0;
}