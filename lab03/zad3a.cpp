#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    char jednostka;
    double temperatura, Tf=0, Tc=0, Tk=0;
    cout<<"Jednostka: ";
    cin>>jednostka;
    cout<<"Temperatura : ";
    cin>>temperatura;
    if (jednostka == 'F'){
        Tf=temperatura;
        Tc=(Tf-32)*5/9;
        Tk=Tc+273.15;
    }
    else if (jednostka == 'K'){
        Tk=temperatura;
        Tc=Tk-273.15;
        Tf=(Tc*9/5)+32;
    }
    else if (jednostka == 'C'){
        Tc=temperatura;
        Tf=(Tc*9/5)+32;
        Tk=Tc+273.15;
    }
    else{
        cout<<"Nieprawidłowa jednostka"<<endl;
        return 0;}
    cout<<fixed<<setprecision(2);
    cout<<"F = "<<Tf<<endl;
    cout<<"C = "<<Tc<<endl;
    cout<<"K = "<<Tk<<endl;
    return 0;
}
