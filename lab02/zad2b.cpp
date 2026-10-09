#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int liczba;
    cout<<"Wybierz precyzję:"<<endl;
    cout<<"[1] pojedyncza precyzja"<<endl;
    cout<<"[2] podwójna precyzja"<<endl;
    cout<<"Wybór : ";
    cin>>liczba;
    float a1, b1;
    double a2, b2;
    cout << fixed << setprecision(12);
    if (liczba==1){
        cout << "Podaj a: ";
        cin >> a1;
        cout << "Podaj b: ";
        cin >> b1;
        cout << "Suma: " << a1 + b1 << endl;
        cout << "Różnica: " << a1 - b1 << endl;
        cout << "Iloczyn: " << a1 * b1 << endl;
        cout << "Iloraz: " << a1 / b1 << endl;
    }
    else if (liczba==2){
        cout << "Podaj a: ";
        cin >> a2;
        cout << "Podaj b: ";
        cin >> b2;
        cout << "Suma: " << a2 + b2 << endl;
        cout << "Różnica: " << a2 - b2 << endl;
        cout << "Iloczyn: " << a2 * b2 << endl;
        cout << "Iloraz: " << a2 / b2 << endl;
    }
    else
    {
        cout<<"Niepoprawny wybór"<<endl;}

    return 0;
}