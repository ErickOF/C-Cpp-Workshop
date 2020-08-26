// Incluye la funcion printf y scanf
#include <stdio.h>
#include <stdlib.h>
// Permite el uso de strings
#include <string.h>


void c_example() {
    // Mostrar una cadena de texto
    printf("Hola Mundo!\n\n");

    // Mostrar un numero entero
    printf("%d\n", 23);
    // Mostrar un numero de punto flotante o decimal
    // Nota %a.bf, donde a es la cantidad de digitos enteros y b la cantidad de decimales
    printf("%2.2f\n\n", 45.89);

    // Mostrar la salida de una cadena + numero
    // Manera incorrecta. Quitar el comentario para ver el error
    //printf("Numero " + 23)
    printf("Numero %d\n\n", 23);

    // Pedir un caracter al usuario
    char letra;
    printf("Ingrese una letra: ");
    scanf("%c", &letra);
    printf("%c\n\n", letra);
    
    // Pedir una cadena al usuario
    char *cadena = (char*) malloc(100 * sizeof(char)); // Despues se explicara en punteros
    printf("Ingrese una letra, palabra o frase: ");
    scanf("%s", cadena);
    printf("%s\n\n", cadena);

    // Pedir dato de tipo entero al usuario
    int entero;
    printf("Ingrese un numero entero: ");
    scanf("%d", &entero);
    printf("%d\n\n", entero);

    // Pedir dato de tipo flotante al usuario
    float flotante;
    printf("Ingrese un numero con decimales: ");
    scanf("%f", &flotante);
    printf("%f\n\n", flotante);

    // Mostrar la salida de distintos datos en un solo print
    // NOTA: "\n" agrega un salto de linea, es decir, escribe en el siguiente reglon
    printf("La letra que se ingreso fue %c\n"
           "La cadena que se ingreso fue %s\n"
           "El numero entero que se ingreso fue %d\n"
           "El numero con decimales que se ingreso fue %f\n\n",
            letra, cadena, entero, flotante);

    // Cambiar el separado del print
    printf("%c, %s, %d, %f\n", letra, cadena, entero, flotante);
    // Caracter de separado es un espacio en blanco
    printf("%c %s %d %f\n", letra, cadena, entero, flotante);
    // Caracter de separado es un -
    printf("%c-%s-%d-%f\n", letra, cadena, entero, flotante);
    // Caracter de separado es *
    printf("%c*%s*%d*%f\n", letra, cadena, entero, flotante);
    // Caracter de separado es _
    printf("%c_%s_%d_%f\n", letra, cadena, entero, flotante);
    
    // Cambiar el final de linea del print
    // Sin cambiar el final de linea
    printf("%c", letra);
    printf("%s", cadena);
    printf("%d", entero);
    printf("%f\n\n", flotante);
    
    // Si el final de linea es \n
    printf("%c\n", letra);
    printf("%s\n", cadena);
    printf("%d\n", entero);
    printf("%f\n\n", flotante);
    
    // Si el final de linea es un espacio vacio
    printf("%c ", letra);
    printf("%s ", cadena);
    printf("%d ", entero);
    printf("%f \n\n", flotante);
    
    // Si el final de linea es -
    printf("%c-", letra);
    printf("%s-", cadena);
    printf("%d-", entero);
    printf("%f\n\n", flotante);
    
    // Si el final de linea es *
    printf("%c*", letra);
    printf("%s*", cadena);
    printf("%d*", entero);
    printf("%f\n\n", flotante);
    
    // Si el final de linea es _
    printf("%c_", letra);
    printf("%s_", cadena);
    printf("%d_", entero);
    printf("%f\n\n", flotante);
    
    // Liberar la memoria
    free(cadena); // Despues se explicara en punteros
}

int main() {
    c_example();
}
