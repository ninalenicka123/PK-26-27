#include <iostream>
#include <iomanip>

using namespace std;

main(){

    char znak;
    int z;
    cout << "Podaj znak: ";
    cin >> znak;
    z = static_cast <int>(znak);
    cout << "Znak: '" << znak << "'" << endl;
    cout << "Rodzaj: ";
    if (z>=65 && z<=90)
        cout << "wielka litera" <<endl;
    else if (z>=97 && z<=122)
        cout << "mała litera" << endl;
    else if (z>=48 && z<=57)
        cout << "cyfra" << endl;
    else 
        cout << "inny znak" << endl;
    cout << "Kod dziesiętnie: " << dec << z << endl;
    cout << "Kod szesnastkowo " << showbase << hex << z << endl;
    

    return 0;
}