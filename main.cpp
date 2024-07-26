#include <iostream>
using namespace std;

int x;
void Function1(){
    x = 5;
    cout << "Inside Function1: x = " << x << endl;
}
int main(){
    
Function1();
x = 2;
cout << "Inside Main Function: x = "<< x << endl;

}


