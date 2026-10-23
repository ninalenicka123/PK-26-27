#include <iostream>

using namespace std;

int main(){
    
    int h;
    cout << "Wysokość: ";
    cin >> h;
    int spacja=h-1, gwiazdka=1;
    for (int w=0; w<h; w++){
        for (int s=0; s<spacja; s++){
            cout<<" ";
        }
        spacja--;
        for (int g=0; g<gwiazdka; g++){
            cout<<"*";
        }
        gwiazdka+=2;
        cout<<endl;
    }

    return 0;
}