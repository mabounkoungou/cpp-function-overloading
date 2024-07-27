#include <iostream>
using namespace std;

//Want to Create an Inside Method

class Methods{
    public:
    void mymethod(){
        cout << "Inside My Method" << endl;
    }
};

// Want to Create an Object
int main(){
    
    Methods Myobject;
    Myobject.mymethod();
}

// Want to Create a Class
/**
class fruits
{
    public:
    string name;
    int price;
};

int main()
{
    fruits Simple_Fruits;
    Simple_Fruits.name = "Berry";
    Simple_Fruits.price = 5;

    fruits Multiple_Fruits;
    Multiple_Fruits.name = "Banana";
    Multiple_Fruits.price = 10;

    cout << "Fruit Name: " << Simple_Fruits.name << " " << "and price is " << Simple_Fruits.price << endl;
    cout << "Fruit Name: " << Multiple_Fruits.name << " " << "and price is " << Multiple_Fruits.price << endl;

    return 0;
}


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

*/