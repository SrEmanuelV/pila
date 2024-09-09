#include <iostream>
#include <stack>  // Incluye la biblioteca para std::stack
#include <string> // Incluye la biblioteca para std::string

int main() {
    // Crear una pila de cadenas
    std::stack<std::string> pila;
    
    // Definir las primeras 15 letras del alfabeto
    std::string letras[15] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O"};

    // Apilar las letras en la pila
    for (const std::string& letra : letras) {
        pila.push(letra);
    }

    // Crear una pila auxiliar para invertir el orden
    std::stack<std::string> pila_aux;

    // Mover los elementos a la pila auxiliar
    while (!pila.empty()) {
        pila_aux.push(pila.top());
        pila.pop();
    }

    // Mostrar los elementos en el orden original
    std::cout << "Mostrando los elementos de la pila:" << std::endl;
    while (!pila_aux.empty()) {
        std::cout << pila_aux.top() << std::endl; // Mostrar el elemento en la parte superior
        pila_aux.pop(); // Desapilar el elemento
    }
    
    return 0;
}
