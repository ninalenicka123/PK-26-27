#include <iostream>

using namespace std;

void jednosci(int n){
    int cyfra = n % 10;
    switch (cyfra){
        case 1: 
            cout<<"jeden";
            break;
        case 2: 
            cout<<"dwa";
            break;
        case 3: 
            cout<<"trzy";
            break;
        case 4: 
            cout<<"cztery";
            break;
        case 5: 
            cout<<"pięć";
            break;
        case 6: 
            cout<<"sześć";
            break;
        case 7: 
            cout<<"siedem";
            break;
        case 8: 
            cout<<"osiem";
            break;
        case 9: 
            cout<<"dziewięć";
            break;
    }
}
void dziesiatki(int n){
    int cyfra = (n/10)%10;
     switch (cyfra){
        case 2:
            cout<<"dwadzieścia ";
            break;
        case 3: 
            cout<<"trzydzieści ";
            break;
        case 4: 
            cout<<"czterdzieści ";
            break;
        case 5: 
            cout<<"pięćdziesiąt ";
            break;
        case 6: 
            cout<<"sześćdziesiąt ";
            break;
        case 7: 
            cout<<"siedemdziesiąt ";
            break;
        case 8: 
            cout<<"osiemdziesiąt ";
            break;
        case 9: 
            cout<<"dziewięćdziesiąt ";
            break;
    }
}
void setki(int n){
    int cyfra = n/100;
    switch (cyfra){
        case 1: 
            cout<<"sto ";
            break;
        case 2: 
            cout<<"dwieście ";
            break;
        case 3: 
            cout<<"trzysta ";
            break;
        case 4: 
            cout<<"czterysta ";
            break;
        case 5: 
            cout<<"pięćset ";
            break;
        case 6: 
            cout<<"sześćset ";
            break;
        case 7: 
            cout<<"siedemset ";
            break;
        case 8: 
            cout<<"osiemset ";
            break;
        case 9: 
            cout<<"dziewięćset ";
            break;
    }
}
void nascie (int n){
    int liczba = n - (n/100)*100;
    switch (liczba){
        case 10:
            cout<<"dziesięć";
            break;
        case 11:
            cout << "jedenaście";
            break;
        case 12:
            cout << "dwanaście";
            break;
        case 13:
            cout << "trzynaście";
            break;
        case 14:
            cout << "czternaście";
            break;
        case 15:
            cout << "piętnaście";
            break;
        case 16:
            cout << "szesnaście";
            break;
        case 17:
            cout << "siedemnaście";
            break;
        case 18:
            cout << "osiemnaście";
            break;
        case 19:
            cout << "dziewietnaście";
            break;
    }
}

int main(){

    int liczba;
    cout << "Liczba: ";
    cin >> liczba;
    if (liczba<0){
        cout<<"minus ";
        liczba = -liczba;
    }
    setki(liczba);
    if((liczba/10)%10==1)
        nascie(liczba);
    else{
        dziesiatki(liczba);
        jednosci(liczba);}
    cout<<endl;


    return 0;
}
