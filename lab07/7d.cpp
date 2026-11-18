#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void slimak (int **T, int n, int m){
    int gora=0;
    int dol = n-1;
    int lewo = 0;
    int prawo = m -1;
    int wartosc = 1;
    while (wartosc<=n*m){
        for(int i=lewo; i<=prawo; i++){
            T[gora][i]=wartosc;
            wartosc++;
        }
        gora ++;
        for(int j=gora; j<=dol; j++){
            T[j][prawo] = wartosc;
            wartosc ++;
        }
        prawo --;
        if(gora<=dol){
            for(int k=prawo; k>=lewo; k--){
                T[dol][k]=wartosc;
                wartosc++;
            }
            dol --;}
        if(lewo<=prawo){   
            for(int l=dol; l>=gora; l--){
                T[l][lewo]=wartosc;
                wartosc++;
            }
            lewo++;}

    }

}
void wyswietl (int **T, int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << setw (6) << T[i][j];
        }
        cout << endl;
    }
}

int main()
{
    int m, n;
    cout << "N: ";
    cin >> n;
    cout << "M: ";
    cin >> m;
    
    int** T = new int* [n];
    for (int i = 0; i < n; i++) {
        T[i] = new int[m];
    }
    slimak(T,n,m);
    wyswietl(T,n,m);

    for (int i=0; i<n; i++)
        delete [] T[i];
    delete [] T;

    return 0;
}


