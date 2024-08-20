#include <iostream>
#include <cstring>

using namespace std;

void vulnerableFunction(char *input) {
    char buffer[10];
    // Pufferüberlauf: Die Eingabe wird direkt in einen kleinen Puffer kopiert
    strcpy(buffer, input);
    cout << "Buffer Inhalt: " << buffer << endl;
}

int main() {
    char *dynamicArray = new char[10];
    
    // Unsichere Verwendung von new: Der Speicher wird nicht überprüft, ob er erfolgreich zugewiesen wurde
    cout << "Geben Sie einen Text ein: ";
    cin >> dynamicArray;  // Pufferüberlauf: Es wird keine Länge des Eingabe-Strings überprüft
    
    vulnerableFunction(dynamicArray);
    
    // Speicherleck: Der Speicher wird nicht freigegeben
    return 0;
}
