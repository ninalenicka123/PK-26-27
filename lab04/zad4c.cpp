#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int v;
    cout << "Prędkość: ";
    cin >> v;
    if(v<0){
        cout<<"Prędkość nie może być ujemna"<<endl;
        return 0;
    }
    else if (v<=10)
        cout<< "Mandat wynosi 50 ";
    else if (v<=20)
        cout<< "Mandat wynosi 100 ";
    else if (v>=30)
        cout<<"Mandat wynosi 200 ";
    else{
        switch(v){
            case 21: cout<<"Mandat wynosi 110 "; break;
            case 22: cout<<"Mandat wynosi 120 ";break;
            case 23: case 27: case 29: cout<<"Mandat wynosi 140 "; break;
            case 24: case 25: case 28: cout<<"Mandat wynosi 150 "; break;
            case 26: cout<< "Mandat wynosi 145"; break;
    }}
    cout<<"PLN"<<endl;

    

    return 0;
}