#include <iostream>

using namespace std;

int main(){
    
    int n,a;
    cout<<"n: ";
    cin>>n;
    cout<<"a: ";
    cin>>a;
    int liczba=1, maks=a;
    while(liczba<n){
        cout<<"a: ";
        cin>>a;
        liczba+=1;
        if(a>maks)
            maks=a;
    }
    cout<<"Maksimum = "<<maks<<endl;

    return 0;
}
