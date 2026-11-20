#include <iostream>
#include <iomanip>

using namespace std;

void test (int *x, int *y, int *z){
    *x=10;
    *y=11;
    *z=12;
}

int main() {
    int x=0, y=1, z=2;
    test (&x, &y, &z);
    cout << x << " " << y << " " << z << endl;
    return 0;
}