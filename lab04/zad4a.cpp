#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int p, w;
    long int wynik;
    cout << "Podstawa: " << endl;
    cin >> p;
    cout << "Wykładnik: " << endl;
    cin >> w;
    if (w<0){
        cout<< "Wykładnik nie może być ujemny";
        return 0;
    }
    wynik = 1;
    for(int i=1; i<=w; i++){
        wynik *=p;
    }
    cout<< p << " ^ " << w << " = " << wynik << endl;
    return 0;
}
