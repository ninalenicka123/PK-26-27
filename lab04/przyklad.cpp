#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int n;
    cout<<"podaj n:";
    cin>>n;

    for(int i=0; i<=n; i++)
        cout<<i<<endl;
    cout<<endl;
    for(int i=n; i>=0; i--)
        cout<<i<<endl;
    cout<<endl;
    for(int i=0; i<=n; i+=2)
        cout<<i<<endl;

    return 0;
}
