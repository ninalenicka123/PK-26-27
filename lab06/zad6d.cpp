#include <iostream>

using namespace std;

long long silnia(int N){
    
    if (N==0 || N==1)
        return 1;
    return N * silnia(N-1); 

}

int main(){

    int N;
    cout << "N:";
    cin >> N;
    if (N<0){
        cout << "N musi być nieujemne" << endl;
        return 0;
    }
    cout << "Silnia: " << silnia(N) << endl;

    return 0;
}