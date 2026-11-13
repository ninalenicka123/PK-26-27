#include <iostream>
using namespace std;

int main(){

    int r;
    cout << "podaj rozmiar: ";
    cin >> r;
    double* Tab = new double[r];
    double n, suma;
    for(int i=0; i<r; i++){
        cout << "Podaj ocenę " << i+1 << ": ";
        cin >> n;
        Tab[i] = n;
        suma+=n;
    }
    double srednia = suma/r;
    cout << srednia << endl;
    
    return 0;
}