#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int wiersz, kolumn;
    cout << "wiersz i kolumny ";
    cin >> wiersz;
    cin >> kolumn;
    int i=0;
    
    for(int w=0; w<wiersz; w++){
        for(int k=0; k<kolumn; k++){
            cout << i << ' ';
            i++;
        }
        cout<< endl;
    }


    return 0;
}
