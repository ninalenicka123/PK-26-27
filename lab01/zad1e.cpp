#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double R;
    double pi = 3.14;
    cout<<"R = ";
    cin>>R;
    cout << fixed << setprecision(2);
    cout<<"Obwód: "<<2*pi*R<<endl;
    cout<<"Pole: "<<pi*R*R<<endl;

}