#include <iostream>
#include <cctype>


using namespace std;

void male (char tekst[] ){
    for (int i = 0; tekst[i] != '\0';) {
        unsigned char c = (unsigned char)tekst[i];

        if (c < 128) {
           tekst[i]=(char)tolower(c);
           i++;
        }
        else {
            if ((unsigned char)tekst[i] == 0xC5 && (unsigned char)tekst[i + 1] == 0x81)
                tekst[i + 1] = (unsigned char)0x82;
            i+=2;
        }}
}

int main(){

    const int MAX_SIZE = 1000;
    char tekst[MAX_SIZE];
    cout << "Tekst: ";
    cin.getline(tekst, MAX_SIZE);
    cout << "Konwersja: " << endl;
    cout << "1. małe" << endl;
    cout << "2. WIELKIE" << endl;
    cout << "3. Tytułowe" << endl;
    cout << "Wybór: ";
    int wybor;
    cin >> wybor;
    switch (wybor){
        case 1: male(tekst); break;
        //case 2: wielkie(tekst); break;
        //case 3: tytulowe(tekst); break;
    }
    cout << tekst << endl;




    return 0;
}