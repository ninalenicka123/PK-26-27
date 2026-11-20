#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>

using namespace std;

void wypelnij (int *T, int n, int zakres){
    int i=0;
    while (i<n){
        *(T+i) = rand() % zakres+1;
        i++;
    }
}
void wypisz (int *T, int n){
    int i=0;
    while (i<n){
        int war = *(T+i);
        cout << war << " ";
        i++;
    }
    cout << endl;
}
int max (int *T, int n){
    int maks = T[0];
    for (int i=0; i<n; i++){
        if(T[i]>maks)
            maks=T[i];
    }
    return maks;
}
int min(int *T, int n){
    int min = T[0];
    for (int i=0; i<n; i++){
        if(T[i]<min)
            min = T[i];
    }
    return min;
}
int liczby_pierwsze(int *T, int n, int * pierwsze){
    for (int i=0; i<n; i++){
        int dziel = 0;
        for (int j=1; j<sqrt(n);j++){
            if(T[i]%j==0)
                dziel++;
        }
        if (dziel==1)
            pierwsze[i]=T[i];
    }
    return *pierwsze;
}

int main(){

    int ziarno, n, zakres;
    cout << "Ziarno: ";
    cin >> ziarno;
    srand(ziarno);
    cout << "N: ";
    cin >> n;
    cout << "Zakres: ";
    cin >> zakres;
    int * T = new int [n];
    int * pierwsze = new int [n];
    wypelnij (T, n, zakres);
    wypisz (T, n);
    liczby_pierwsze (T, n, pierwsze);
    for (int i=0; i<n; i++){
        cout << pierwsze [i] << " ";
    }
    delete[] T;
    return 0;
}