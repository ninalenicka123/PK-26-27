#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int sposob;
    cout << "Wybierz sposób konwersji:" << endl;
    cout << "[1] Celsjusza na Fahrenheita" << endl;
    cout << "[2] Fahrenheita na Celsjusza" << endl;
    cout << "Wybór: ";
    cin >> sposob;
    cout << fixed << setprecision(2);
    double cels;
    double far;
    double zeroc = -273.15;
    double zerof = -459.67;
    cout<<"Podaj temperaturę: ";

    if(sposob==1){
        cin>>cels;
        if(cels<zeroc){
            cout<<"Zbyt zimno na liczenie!"<<endl;
            return 0;
        }
        far = (cels * 1.8) + 32;
        cout<<cels<<" st. Celsjusza to "<<far<<" st. Fahrenheita";
    }
    else if (sposob==2){
        cin>>far;
        if(far<zerof){
            cout<<"Zbyt zimno na liczenie!"<<endl;
            return 0;
        }
        cels = (far - 32) / 1.8;
        cout<<far<<" st. Fahrenheita to "<<cels<<" st. Celsjusza";
    }
    return 0;
}


