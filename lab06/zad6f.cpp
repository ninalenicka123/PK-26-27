#include <iostream>

using namespace std;

void dwojkowy (int N){
    int p=2;
    if (N>=p){
        dwojkowy(N/p);
    }
    int reszta = N % p;
    cout << reszta;
}
void piatkowy (int N){
    int p=5;
    if (N>=p){
        piatkowy(N/p);
    }
    int reszta = N % p;
    cout << reszta;
}
void siodemkowy (int N){
    int p=7;
    if (N>=p){
        siodemkowy(N/p);
    }
    int reszta = N % p;
    cout << reszta;
}
void osemkowy (int N){
    int p=8;
    if (N>=p){
        osemkowy(N/p);
    }
    int reszta = N % p;
    cout << reszta;
}
void szesnastkowy (int N){
    int p=16;
    if (N>=p){
        szesnastkowy(N/p);
    }
    int reszta = N%p;
    if (reszta<10)
        cout<<reszta;
    else{
        switch(reszta){
            case 10:
                cout<<"A";
                break;
            case 11:
                cout<<"B";
                break;
            case 12:
                cout<<"C";
                break;
            case 13:
                cout<<"D";
                break;
            case 14:
                cout<<"E";
                break;
            case 15:
                cout<<"F";
                break;
        }
    }
}


int main(){

    int N;
    cout << "N:";
    cin >> N;
    cout << "Binarnie: ";
    dwojkowy(N);
    cout << endl;
    cout << "Piątkowo:: ";
    piatkowy(N);
    cout << endl;
    cout << "Siódemkowo: ";
    siodemkowy(N);
    cout << endl;
    cout << "Ósemkowo: ";
    osemkowy(N);
    cout << endl;
    cout << "Szesnastkowo: ";
    szesnastkowy(N);
    cout << endl;


    return 0;
}
