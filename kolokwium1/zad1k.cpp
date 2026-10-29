#include <iostream>
#include <iomanip>

using namespace std;

main(){

    int N;
    cout<<"Liczba pomiarów:";
    cin>>N;
    while(N<=0){
        cout << "Liczba pomiarów musi być większa od zera"<<endl;
        cout<<"Liczba pomiarów:";
        cin>>N;  
    }
    cout<<"Podaj temperatury: ";
    int T, T1, najm, najw=0, roz=0, j=0;
    for(int i=0;i<N;i++){
        cin>>T;
        if(i==0){
            T1=T;
            najm=T;}
        if(T>=najw)
            najw=T;
        if(T<=najm)
            najm=T;
        if(T==T1)
            j++;
    }
    roz=najw-najm;
    if(j==N)
        cout<<"Wszystkie temperatury są takie same: "<<T<<endl;
    else{
        cout<<"Największa temperatura: "<<najw<<endl;
        cout<<"Najmniejsza temperatura: "<<najm<<endl;
        cout<<"Różnica: "<<roz<<endl;
    }
    
    
    return 0;
}