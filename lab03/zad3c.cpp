#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n,a;
    cout<<"N: ";
    cin>>n;
    if(n<=0){
        cout<<"N musi by większe od zera";
        return 1;
    }
    cout<<"A: ";
    cin>>a;
    if(a<0){
        cout<<"A nie jest liczbą naturalną";
        return 2;
    }
    int s=a;
    for(int i=n;i>1;i--){
        a++;
        s+=a;
    }
    cout<<"Suma: "<<s<<endl;

    return 0;
}