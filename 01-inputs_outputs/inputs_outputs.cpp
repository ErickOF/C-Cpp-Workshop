// Incluye la funcion cout y cin
#include <iostream>
// Permite el uso de strings
#include <string.h>


void cpp_exaple() {
    // Mostrar una cadena de texto
    std::cout << "Hola mundo!\n\n";
    
    // Mostrar un numero entero
    std::cout << 23 << std::endl << std::endl;
    
    // Mostrar un numero decimal
    std::cout << 45.89 << std::endl << std::endl;
    
    // Mostrar la salida de una cadena + numero
    // Manera incorrecta. Quitar el comentario para ver lo que sucede
    //std::cout << "Numero " + 23 << std::endl;
    // Forma correcta
    std::cout << "Numero " << 23 << std::endl << std::endl;

    // Pedir un caracter al usuario
    char letra;
    std::cout << "Ingrese una letra: ";
    std::cin >> letra;
    std::cout << letra << std::endl << std::endl;
    
    // Aqui se pide una cadena
    std::string cadena;
    std::cout << "Ingrese una letra, palabra o frase: ";
    std::cin >> cadena;
    std::cout << cadena << std::endl << std::endl;

    // Pedir dato de tipo entero al usuario
    int entero;
    std::cout << "Ingrese un numero entero: ";
    std::cin >> entero;
    std::cout << entero << std::endl << std::endl;

    // Pedir dato de tipo flotante al usuario
    // Nota: si digita un numero n sin decimales se muestra como n.0
    float flotante;
    std::cout << "Ingrese un numero con decimales: ";
    std::cin >> flotante;
    std::cout << flotante << std::endl << std::endl;

    // Mostrar la salida de distintos datos en un solo print
    // NOTA: '\n' agrega un salto de linea, es decir, escribe en el siguiente reglon
    std::cout << "La letra que se ingreso fue " << letra <<
                "\nLa cadena que se ingreso fue " + cadena +
                "\nEl numero entero que se ingreso fue " << entero <<
                "\nEl numero con decimales que se ingreso fue " << flotante << std::endl << std::endl;

    // Cambiar el separado del print
    // Caracter de separado es un espacio en blanco
    std::cout << letra << " " << cadena << " " << entero << " " << flotante << std::endl;
    // Caracter de separado es un -
    std::cout << letra << "-" << cadena << "-" << entero << "-" << flotante << std::endl;
    // Caracter de separado es *
    std::cout << letra << "*" << cadena << "*" << entero << "*" << flotante << std::endl;
    // Caracter de separado es _
    std::cout << letra << "_" << cadena << "_" << entero << "_" << flotante << std::endl << std::endl;

    // Cambiar el final de linea del print
    // Sin cambiar el final de linea
    std::cout << letra << std::endl;
    std::cout << cadena << std::endl;
    std::cout << entero << std::endl;
    std::cout << flotante << std::endl << std::endl;

    // Si el final de linea es un espacio vacio
    std::cout << letra << " ";
    std::cout << cadena << " ";
    std::cout << entero << " ";
    std::cout << flotante << std::endl << std::endl;
    
    // Si el final de linea es -
    std::cout << letra << "-";
    std::cout << cadena << "-";
    std::cout << entero << "-";
    std::cout << flotante << std::endl << std::endl;
    
    // Si el final de linea es *
    std::cout << letra << "*";
    std::cout << cadena << "*";
    std::cout << entero << "*";
    std::cout << flotante << std::endl << std::endl;
    
    // Si el final de linea es _
    std::cout << letra << "_";
    std::cout << cadena << "_";
    std::cout << entero << "_";
    std::cout << flotante << std::endl << std::endl;
}

int main() {
    cpp_exaple();  
}
