#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float p,r,i;
    int t;

    cout<<"P = ";
    cin>>p;

    cout<<"T = ";
    cin>>t;

    cout<<"R = ";
    cin>>r;

    cout<<fixed<< setprecision(2);
    
    i=(p*t*r)/100;

    int calkowita_czesc = static_cast<int>(i);

    cout<<"Wynik rzeczywisty: "<<i<<endl;
    cout<<"Wynik całkowity: "<<calkowita_czesc<<endl;
    return 0;
}