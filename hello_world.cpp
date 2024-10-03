#include <iostream>
#include <string>

int main() {  
    // Requests the user's first and last name
    std::string firstName, lastName;
    std::cout << "Enter your first name: ";
    std::cin >> firstName;
    std::cout << "Enter your last name: ";
    std::cin >> lastName;

    // Displays a message
    std::cout << "Hello world from " << firstName << " " << lastName << std::endl;
    return 0;
}