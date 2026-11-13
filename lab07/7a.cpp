#include <iostream>
#include <cmath>

using namespace std;

const double EPS = 0.001;          
const int MAX_N = 100;

double wartoscwielomianu (double x,  double T[], int n){

    double wartosc=0;
    for (int i=0; i<n; i++){
        wartosc+= x*T[i];
    }
    return wartosc;

}


bool czy_mzerowe (double a, double b, double T[], int n){
    double w1, w2;
    w1 = wartoscwielomianu(a, T, n);
    w2 = wartoscwielomianu(b, T, n);
    if (w1 * w2 <=0)
        return true;
    return false;
    
}
double bisekcja(double a, double b, double wsp[], int n) {
    
    // liczymy połowę przedziału ze wzoru polowa = (a+b) / 2
    // liczymy wartosc wielomianu dla 'polowa' - > wartoscWielomianu (...), wynik wywołania funkcji przypisujemy do zmiennej... np fpolowa

    // sprawdzamy warunek stopu rekurencji - moze wlasnie znalezlismy miejse zerowe?
    // warunkiem stopu jest znalezienie miejsca zerowego, czyli wartość f(polowa) < EPS lub (b - a) < EPS (przedział już tak mały, że traktujemy jako miejsce zerowe

    //liczymy wartosci wielomianu dla a fa = wartoscWielomianu(a, ....)

    // szukamy przedzialu gdzie funkcja zmienai znak, czyli sprawdzamy czy f(a) * fpolowa <=0 jeśli tak, to jest nasz nowy przedzial dla rekurencji
    // jesli nie, naszym przedzialem dla rekurencji jest bisekcja(polowa, b, wsp, n)

}


int main(){

    double a, b;
    int n, x;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "n: ";
    cin >> n;
    double T[MAX_N];
    for (int i=0; i<=n; i++){
        cout << "x" << i << ": ";
        cin >> x;
        T[i] = x;
    }
    if (czy_mzerowe(a,b,T,n) == 0){
        cout << "Brak miejsca zerowego w zadanym przedziale" << endl;
    }

    return 0;
}