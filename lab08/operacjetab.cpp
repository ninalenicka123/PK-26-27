#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

void wypelnij (int *T, int n){
    int i=0;
    while (i<n){
        *(T+i) = rand() % 100;
        i++;
    }
}
void wypisz (int *T, int n){
    int i=0;
    while (i<n){
        int war = *(T+i);
        cout << setw(6) << war;
        i++;
    }
    cout << endl;
}
void pary(int *T, int n){
    int i=0;
    while(i<n-1){
        cout << setw(6) << *(T+i) << setw(6) <<*(T+i+1) << endl;
        i++;
    }
}

int main(){

    int ziarno, n;
    cout << "Ziarno: ";
    cin >> ziarno;
    srand(ziarno);
    cout << "N: ";
    cin >> n;
    int * T = new int [n];
    wypelnij (T, n);
    wypisz (T, n);
    pary (T, n);

    delete[] T;
    return 0;
}