#include <iostream>

using namespace std;

int main(){
    
    int n;
    cout << "rozmiar: ";
    cin>>n;
    int suma=0;
    for(int w=0; w<n; w++){
        for(int k=0; k<n; k++){
            suma = w + k;
            if(suma % 2 != 0)
                cout << "  ";
            else
                cout <<  "##";
        }
        cout << endl;
    }

    return 0;
}
