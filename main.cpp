#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> lines(5);
    
    std::cout << "Введите 5 строк текста:\n";
    for (int i = 0; i < 5; ++i) {
        std::cout << i + 1 << ": ";
        std::getline(std::cin, lines[i]);
    }
    
    std::cout << "\n--- Результат (3 повтора) ---\n";
    for (int r = 0; r < 3; ++r) {
        std::cout << "\n=== Повтор " << r + 1 << " ===\n";
        for (int i = 0; i < 5; ++i) {
            std::cout << lines[i] << "\n";
        }
    }
    
    return 0;
}