#include <iostream>
#include <iomanip>

using namespace std;

void wypelnij (int **A, int n, int m){
    int w=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            A[i][j]=w;
            w++;
        }
    }
}
void wypisz(int **tab, int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << setw(6) << tab[i][j];
        }
        cout << endl;
    }
}
void transpozycja(int **A, int **B, int n, int m){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            B[i][j]=A[j][i];
    }
}

int main()
{
    int m, n;
    cout << "N: ";
    cin >> n;
    cout << "M: ";
    cin >> m;
    
    int** A = new int* [n];
    for (int i = 0; i < n; i++) {
        A[i] = new int[m];
    }

    int** B = new int* [m];
    for (int i = 0; i < m; i++) {
        B[i] = new int[n];
    }
    wypelnij (A,n,m);
    cout << "A: " << endl;
    wypisz(A,n,m);
    transpozycja(A,B,n,m);
    cout << "B: "<<endl;
    wypisz(B,m,n);

    for (int i = 0; i < n; i++) {
        delete[] A[i];}
    delete [] A;
    for (int i = 0; i < m; i++) {
        delete[] B[i];}
    delete [] B;
    return 0;
}
