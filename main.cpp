#include <iostream>
#include <cstring>

void vulnerableFunction(char *input) {
    char buffer[10];
    strcpy(buffer, input);
    std::cout << "Buffer Inhalt: " << buffer << std::endl;
}

int main() {
    char *dynamicArray = new char[10];
    
    std::cout << "Geben Sie einen Text ein: ";
    std::cin >> dynamicArray;  // Pufferüberlauf: Es wird keine Länge des Eingabe-Strings überprüft
    
    vulnerableFunction(dynamicArray);
    
    delete[] dynamicArray;  // Speicher freigeben, um Speicherleck zu vermeiden
    return 0;
}
