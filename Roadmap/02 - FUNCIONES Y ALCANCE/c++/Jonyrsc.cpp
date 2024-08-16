/*
Ejercicio: Crear ejemplos de funciones basicas que representen diferentes
posiblidades del lenguaje:
    * Sin parametros ni retorno
    * Con uno o mas parametros,
    * Con retorno
    * Probar funciones dentro de funciones
    * Utilizar funciones ya creadas del lenguaje
    * Variable local y global
    * Debes hacer print por consola del resultado de todos los ejemplos.
    * (y tener en cuenta que cada lenguaje puede poseer más o menos posibilidades)
*/
#include <iostream>
using namespace std;

// Declaración de funciones
void saludar();
void despedirse();
void mostrarmenu();
void saludarydespedirse();
void saludar_primero(const char saludo[], const char nombre[]);
void extra();

// Variables globales

int numv = 0;
int void_retorno = 0;
char nombre[20] = "Jonyrsc";
char saludo[20] = "Hola";
int suma(int a,int b){ return a+ b; }
char para[30] = "Parametro 1";
char parb[30] = "Parametro 2";
int cont_extra;

int main() {
    
    // Variables locales
    int num = 0;
    // Menú de funciones sin retorno
    cout << "::::: Funcion con switch sin retorno :::::" << endl;
    cout << "Elige el número [1] o [2] y [3] para pasar al siguiente" << endl;
    cin >> num;
    switch (num) {
    case 1:
        cout << "Número 1" << endl;
        break;
    case 2:
        cout << "Número 2" << endl;
        break;
    default:
        cout << "Opción no válida" << endl;
    }
    // Menú de funciones con retorno
    do {
        cout << endl << "::::: Funcion retorno con do while y void dentro de un switch :::::" << endl;;
        cout << "¿Qué deseas elegir?" << endl;
        cout << "1. Saludar" << endl;
        cout << "2. Despedirse" << endl;
        cout << "3. Salir de la funcion do while" << endl;
        cin >> numv;

        switch (numv) {
        case 1:
            saludar();
            break;
        case 2:
            despedirse();
            break;
        default:
            mostrarmenu();
        }
    } while (numv == 1 || numv == 2);

    // Menú para saludar y despedirse
    cout << endl << "::::: Funcion retorno con un do while con un switch dentro de un void que integra dos void :::::" << endl;
    do {
        cout << "1. Para elegir las dos primeras: 'Saludar' y 'Despedirse'" << endl;
        cout << "2.[ u otro numero] Salir" << endl;
        cin >> void_retorno;
        if (void_retorno == 1) {
            saludarydespedirse();
        }
        else if (void_retorno == 2) {
            cout << "" << endl;
        }
    } while (void_retorno == 1);

    // Funcion de operacion
    // Saludar_primero(saludo, nombre);
    
    cout << "::::: Funcion de operacion sin retorno :::::" << endl << endl;
    cout << "Operacion de 5 + 4 es:" << suma(4,5)<< endl<< endl;

    // Dificultad extra
    // Variables locales
    cout << "::::: Dificultad extra :::::" << endl;
    extra();

    return 0;
}

// Definición de funciones
void saludar() {
    cout << "Hola, les habla Jony" << endl;
}

void despedirse() {
    cout << "Adiós, se cuidan amigos" << endl;
}

void mostrarmenu() {
    cout << "Saliste de la funcion do while." << endl;
}

void saludarydespedirse() {
    cout << "Este es el void de saludar y despedirse" << endl;
    saludar();
    despedirse();
}

void saludar_primero(const char saludo[], const char nombre[]) {
    cout << saludo << " " << nombre << endl;
}

void extra() {
    for (cont_extra = 1; cont_extra <= 100;cont_extra++) {
        if (cont_extra % 5 == 0 && cont_extra % 3 == 0) {
                cout << para << parb << endl;            
        }
        if (cont_extra % 3 == 0) {
            cout << para << endl;
        }
        else if (cont_extra % 5 == 0) {
            cout << parb << endl;
        }
        else
            cout << cont_extra << endl;
    }
}
/*
*DIFICULTAD EXTRA(opcional) :
    *Crea una función que reciba dos parámetros de tipo cadena de texto y retorne un número.
    * -La función imprime todos los números del 1 al 100. Teniendo en cuenta que :
*-Si el número es múltiplo de 3, muestra la cadena de texto del primer parámetro.
* -Si el número es múltiplo de 5, muestra la cadena de texto del segundo parámetro.
* -Si el número es múltiplo de 3 y de 5, muestra las dos cadenas de texto concatenadas.
* -La función retorna el número de veces que se ha impreso el número en lugar de los textos.
*
*Presta especial atención a la sintaxis que debes utilizar en cada uno de los casos.
* Cada lenguaje sigue una convenciones que debes de respetar para que el código se entienda.
*/