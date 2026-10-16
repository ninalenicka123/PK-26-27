#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int n;
    cout<<"N: ";
    cin>>n;
    if(n<0){
        cout<<"N musi być nieujemne"<<endl;
        return 1;
    }
    int silnia=1;
    for(int i=1;i<=n;i++){
        silnia*=i;
    }
   
    cout<<"Silnia = "<<silnia<<endl;
    return 0;
}
