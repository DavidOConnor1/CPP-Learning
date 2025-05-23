#include <iostream>

int main() {
    int x; //declaration
    x = 5; //assignment
    //efficient way: x=5
    int y= 6;

    int sum = x+y;
    std::cout << x << '\n' << y <<'\n' ;
    std::cout << "Sum of x+y = "<<sum;

    return 0;
}