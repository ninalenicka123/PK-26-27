#include <iostream>
using namespace std;

int main(){

    const int rozmiar_tab = 5;
    double T[rozmiar_tab];
    double n, suma=0;
    for(int i=0; i<rozmiar_tab; i++){
        cout << "Podaj ocenę " << i+1 << ": ";
        cin >> n;
        T[i] = n;
        suma+=n;
    }
    double srednia = suma/rozmiar_tab;
    cout << srednia << endl;


    
    return 0;
}