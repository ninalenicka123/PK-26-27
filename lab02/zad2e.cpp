#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float punkty;
    cout<<"Punkty: ";
    cin>>punkty;
    if (punkty<0.0f || punkty>9.0f)
        cout<<"Nieprawidłowa liczba punktów!"<<endl;
    else if (punkty<=4.4f){
        cout<<"Uzyskana ocena to niedostateczny (2.0)"<<endl;}
    else if (punkty<=5.2f)
        cout<<"Uzyskana ocena to dostateczny (3.0)"<<endl;
    else if (punkty<=6.2f)
        cout<<"Uzyskana ocena to ponad dostateczny (3.5)"<<endl;
    else if (punkty<=7.2f)
        cout<<"Uzyskana ocena to dobry (4.0)"<<endl;
    else if (punkty<=8.2f)
        cout<<"Uzyskana ocena to ponad dobry (4.5)"<<endl;
    else
        cout<<"Uzyskana ocena to bardzo dobry (5.0)"<<endl;
    
    
    return 0;
}