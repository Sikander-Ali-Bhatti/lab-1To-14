#include <iostream>
#include <string>

int main() {
    std::string text = "Computer System Engineering";
    std::string toDelete = " System";
    
    size_t position = text.find(toDelete);
    
    if (position != std::string::npos) {
        text.erase(position, toDelete.length());
    }
    
    std::cout << text << std::endl;
    
    return 0;
}
