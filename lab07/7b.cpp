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
            if ((unsigned char)tekst[i] == 0xC4 && (unsigned char)tekst[i + 1] == 0x84)
                tekst[i + 1] = (unsigned char)0x85;
            else if ((unsigned char)tekst[i] == 0xC4 && (unsigned char)tekst[i + 1] == 0x86)
                tekst[i + 1] = (unsigned char)0x87;
            else if ((unsigned char)tekst[i] == 0xC4 && (unsigned char)tekst[i + 1] == 0x98)
                tekst[i + 1] = (unsigned char)0x99;
            else if ((unsigned char)tekst[i] == 0xC5 && (unsigned char)tekst[i + 1] == 0x81)
                tekst[i + 1] = (unsigned char)0x82;
            else if ((unsigned char)tekst[i] == 0xC5 && (unsigned char)tekst[i + 1] == 0x83)
                tekst[i + 1] = (unsigned char)0x84;
            else if ((unsigned char)tekst[i] == 0xC3 && (unsigned char)tekst[i + 1] == 0x93)
                tekst[i + 1] = (unsigned char)0xB3;
            else if ((unsigned char)tekst[i] == 0xC5 && (unsigned char)tekst[i + 1] == 0x9A)
                tekst[i + 1] = (unsigned char)0x9B;
            else if ((unsigned char)tekst[i] == 0xC5 && (unsigned char)tekst[i + 1] == 0xB9)
                tekst[i + 1] = (unsigned char)0xBA;
            else if ((unsigned char)tekst[i] == 0xC5 && (unsigned char)tekst[i + 1] == 0xBB)
                tekst[i + 1] = (unsigned char)0xBC;
            i+=2;
        }}
}
void wielkie (char tekst[]){
    for (int i = 0; tekst[i] != '\0';) {
        unsigned char c = (unsigned char)tekst[i];

        if (c < 128) {
           tekst[i]=(char)toupper(c);
           i++;
        }
        else {
            if ((unsigned char)tekst[i] == 0xC4 && (unsigned char)tekst[i + 1] == 0x85)
                tekst[i + 1] = (unsigned char)0x84;
            else if ((unsigned char)tekst[i] == 0xC4 && (unsigned char)tekst[i + 1] == 0x87)
                tekst[i + 1] = (unsigned char)0x86;
            else if ((unsigned char)tekst[i] == 0xC4 && (unsigned char)tekst[i + 1] == 0x99)
                tekst[i + 1] = (unsigned char)0x98;
            else if ((unsigned char)tekst[i] == 0xC5 && (unsigned char)tekst[i + 1] == 0x82)
                tekst[i + 1] = (unsigned char)0x81;
            else if ((unsigned char)tekst[i] == 0xC5 && (unsigned char)tekst[i + 1] == 0x84)
                tekst[i + 1] = (unsigned char)0x83;
            else if ((unsigned char)tekst[i] == 0xC3 && (unsigned char)tekst[i + 1] == 0xB3)
                tekst[i + 1] = (unsigned char)0x93;
            else if ((unsigned char)tekst[i] == 0xC5 && (unsigned char)tekst[i + 1] == 0x9B)
                tekst[i + 1] = (unsigned char)0x9A;
            else if ((unsigned char)tekst[i] == 0xC5 && (unsigned char)tekst[i + 1] == 0xBA)
                tekst[i + 1] = (unsigned char)0xB9;
            else if ((unsigned char)tekst[i] == 0xC5 && (unsigned char)tekst[i + 1] == 0xBC)
                tekst[i + 1] = (unsigned char)0xBB;
            i+=2;
        }
        }
}
void tytulowe (char tekst[]){
    for (int i = 0; tekst[i] != '\0';) {
        unsigned char c = (unsigned char)tekst[i];
        if(i==0 || tekst[i-1]==' '){
            if(c<128){
                if((unsigned char)tekst[i]>=97)
                    tekst[i]=(char)toupper(c);
                i++;
            } 
            else {
                if ((unsigned char)tekst[i] == 0xC4 && (unsigned char)tekst[i + 1] == 0x85)
                    tekst[i + 1] = (unsigned char)0x84;
                else if ((unsigned char)tekst[i] == 0xC4 && (unsigned char)tekst[i + 1] == 0x87)
                    tekst[i + 1] = (unsigned char)0x86;
                else if ((unsigned char)tekst[i] == 0xC4 && (unsigned char)tekst[i + 1] == 0x99)
                    tekst[i + 1] = (unsigned char)0x98;
                else if ((unsigned char)tekst[i] == 0xC5 && (unsigned char)tekst[i + 1] == 0x82)
                    tekst[i + 1] = (unsigned char)0x81;
                else if ((unsigned char)tekst[i] == 0xC5 && (unsigned char)tekst[i + 1] == 0x84)
                    tekst[i + 1] = (unsigned char)0x83;
                else if ((unsigned char)tekst[i] == 0xC3 && (unsigned char)tekst[i + 1] == 0xB3)
                    tekst[i + 1] = (unsigned char)0x93;
                else if ((unsigned char)tekst[i] == 0xC5 && (unsigned char)tekst[i + 1] == 0x9B)
                    tekst[i + 1] = (unsigned char)0x9A;
                else if ((unsigned char)tekst[i] == 0xC5 && (unsigned char)tekst[i + 1] == 0xBA)
                    tekst[i + 1] = (unsigned char)0xB9;
                else if ((unsigned char)tekst[i] == 0xC5 && (unsigned char)tekst[i + 1] == 0xBC)
                    tekst[i + 1] = (unsigned char)0xBB;
                i+=2;
            }
        }
        i++;
    }
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
        case 2: wielkie(tekst); break;
        case 3: tytulowe(tekst); break;
    }
    cout << tekst << endl;




    return 0;
}