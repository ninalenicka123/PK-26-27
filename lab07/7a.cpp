#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double EPS = 0.001;          
const int MAX_N = 100;

double wartoscwielomianu (double x,  double T[], int n){

    double wartosc=0;
    for (int i=0; i<=n; i++){
        wartosc+= pow(x,i)*T[i];
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
double bisekcja(double a, double b, double T[], int n) {
    
    double polowa = (a+b)/2;
    double wartpolowa = wartoscwielomianu(polowa, T, n);
    if (fabs(wartpolowa)<EPS || fabs(b-a)<EPS)
        return polowa;
    else{
        double warta = wartoscwielomianu (a, T, n);
        if (warta * wartpolowa <0)
            b=polowa;
        else 
            a=polowa;
        return bisekcja (a,b,T,n);
    }
    
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
        return 0;
    }
    cout << fixed << setprecision (3);
    cout << "Miejsce zerowe: " <<bisekcja(a,b,T,n);


    return 0;
}