#include <iostream>
using namespace std;
int sum(int k){
    if (k > 0){
        return k + sum(k - 1);
    }
    else{
        return 0;
    }
}
int main(){
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    int result = sum(n);
    cout << "The sum of numbers from 1 to " << n << "is: " << result << endl;
    return 0;
    
}