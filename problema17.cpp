/*
Marcos Murillo Hernández

Practica 1
Problema 17

La secuencia de números triangulares se forma al sumar su posición en el arreglo
con el valor del número anterior: 1, 1+2=3, 3+3=6, 6+4=10, 10+5=15, 15+6=21, 21+7=28...
Si listamos los números triangulares y sus divisores tenemos:
1: 1
3: 1,3
6: 1,2,3,6
10: 1,2,5,10
15: 1,3,5,15
21: 1,3,7,21
28: 1,2,4,7,14,28
Se observa que 28 es el primer número triangular que tiene más de 5 divisores. Escriba un programa
que reciba un número k y calcule cual es el primer número triangular que tiene más de k divisores.
Tip: el enésimo número triangular se puede representar como n*(n+1)/2.
Nota: la salida del programa debe ser:
El numero es: 28 que tiene 6 divisores.
*/
#include <iostream>

using namespace std;

int main ()
{
    // Declaración variables
    // Cantidad de divisores del número triangular
    int divisores_k;
    // contador divisores y número de digitos
    int contador_divisores=0;
    // Posición "n" y numero triangular
    int n=1, numero_triangular=0;
    // Contador de posibles divisores
    int contador_posibles_divisores;

    // Ingresar número
    cout << "Ingresar numero k: ";
    cin >> divisores_k;

    // Números triangulares
    while (contador_divisores<divisores_k) {
        // Ecuación número triangulares, donde "n" es la posición.
        numero_triangular=(n*(n+1))/2;
        n++;
        contador_divisores++;
        cout << endl<<numero_triangular <<": ";
        contador_divisores=0;
        // Divisores del número triangular
        for (contador_posibles_divisores=1;contador_posibles_divisores<=numero_triangular;contador_posibles_divisores++) {
            // Si el valor es divisible por el número N lo imprime
            if(numero_triangular%contador_posibles_divisores==0){
                contador_divisores++;
                cout << contador_posibles_divisores <<" ";
            }
        }
    }

    // Resultado número triangular y cantidad de divisores
    cout << endl <<"El numero es: "<<numero_triangular << " tiene "<<contador_divisores << " digitos."<< endl;



    return 0;
}
