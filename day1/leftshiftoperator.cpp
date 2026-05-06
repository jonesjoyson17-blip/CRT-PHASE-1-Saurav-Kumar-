#include <iostream>

int main() {
    int a, b;

    std::cout << "Enter two integers (a and b): ";
    std::cin >> a >> b;

    a = a << 2;

    std::cout << "The updated value of a is: " << a << std::endl;

    return 0;
}