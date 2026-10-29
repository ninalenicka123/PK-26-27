#include <iostream>

using namespace std;

int main(){

    int N;
    cout<<"Podaj rozmiar:";
    cin>>N;
    if(N%2==0 || N<3 || N>21){
         cout << "Nieprawidłowy rozmiar" << endl;
        return 0;}
    for(int w=1;w<=N;w++){
        for(int k=1;k<=N;k++){
            if(w==(N+1)/2)
                cout<<"+";
            else{
                if(k==(N+1)/2)
                    cout<<"+";
                else 
                    cout<<".";}
        }
        cout<<endl;
    }


    return 0;
}