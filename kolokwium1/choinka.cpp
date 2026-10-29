#include <iostream>

using namespace std;

main(){

    int n;
    cout << "podaj rozmiar: ";
    cin >> n;
    int spacja, gwiazdka=1;
    for (int w=0; w<n; w++){
        spacja = n - w - 1;
        for(int s=0; s<spacja; s++)
            cout<<" ";
        for(int g=0; g<gwiazdka; g++){
            cout<<"*";
        }
        gwiazdka+=2;
        cout<<endl;
    }

    return 0;
}