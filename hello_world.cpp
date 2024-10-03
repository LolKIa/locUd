#include <iostream>
int main() {  
    // Запрашивает имя пользователя
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    // Выводит сообщение
    std::cout << "Hello world from " << name << std::endl;
    return 0;
}