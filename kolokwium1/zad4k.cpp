#include <iostream>
#include <iomanip>

using namespace std;

main() {
    
    int A, B;
    cout << "Podaj A: ";
    cin >> A;
    cout << "Podaj B: ";
    cin >> B;
    if (A>B) {
        cout << "A musi być mniejsze lub równe B" << endl;
        return 0;
    }
    
    int suma;
    for (int i=A; i<=B; i++){
        if(i%2!=0 && i%3==0)
            suma+=i;
    }
    if (suma == 0){
        cout << "Brak liczb spełniających warunek" << endl;
        return 0;
    }
    cout << "Suma liczb nieparzystych i niepodzielnych przez 3 z przedziału [" << A << ", " << B << "] wynosi: " << suma << endl;
    return 0;
}