#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

/*Aca vamos a colocar las variables de cada uno de los operadores*/

//Operadores aritméticos: variables
int suma1 = 1, suma2 = 26, resultadosuma;
int resta1 = 50, resta2 = 23, resultadoresta;
int multiplicacion1 = 12, multiplicacion2 = 3, resultadomultiplicacion;
float dividendo = 27, divisor = 3, resultadodivision;
int base = 5, potencia = 2, resultadopotenciacion;
int modulo1 = 10, modulo2 = 3, resultadomodulo;
int dividendoentero = 27, divisorentero = 10, resultadodivisionentera;

//Operadores de comparación: variables
int igualdadnumero1 = 27, igualdadnumero2 = 1;
int mayoroigual1 = 17, mayoroigual2 = 20;
int menoroigual1 = 11, menoroigual2 = 11;
int mayor1 = 72, mayor2 = 27;
int menor1 = 15, menor2 = 15;
int diferente1 = 27, diferente2 = 27;

//Operadores lógicos: variables
int logicoand1 = 1, logicoand2 = 10;
int logicoor1 = 27, logicoor2 = 5;
int logiconot1 = 50, logiconot2 = 30;

//Operadores de asignación: variable
int mi_numero;

//Operadores de identidad: variables
int numero_puntero;
int* puntero_A = &mi_numero;
int* puntero_B = &numero_puntero;

//Operadores de pertenencia: variables
string vector[];
int a;
int value;
const int talla = 5;

//Operadores binarios: variables
int numero_A, numero_B, resultado_binario_or, resultado_binario_and, resultado_binario_xor, resultado_binario_not;
int resultado_binario_desplazamiento, desplazamiento;

//Condiciones de control: variables
string mi_cadena = "Hola, Jonathan";
int iterativa_for;
int contador_while;
int do_while_salir;

//Manejo de excepciones: variables
int divisor_excepcion, resultado;

//Extra: variables
int numero, auxiliar;

int main() {

	/*Aca vamos a poner los operadores*/

	//Operadores aritméticos

	resultadosuma = suma1 + suma2;
	resultadoresta = resta1 - resta2;
	resultadomultiplicacion = multiplicacion1 * multiplicacion2;
	resultadodivision = dividendo / divisor;
	resultadopotenciacion = base ^ potencia;
	resultadomodulo = modulo1 % modulo2;
	resultadodivisionentera = dividendoentero / divisorentero;
	(int)resultadodivisionentera; // Casting no necesario aquí, ya que no se utiliza.
	cout << "Operadores aritméticos\n";
	cout << "La suma de " << suma1 << " + " << suma2 << " = " << resultadosuma << "\n" << endl;
	cout << "La resta de " << resta1 << " - " << resta2 << " = " << resultadoresta << "\n" << endl;
	cout << "La multiplicación de " << multiplicacion1 << " * " << multiplicacion2 << " = " << resultadomultiplicacion << "\n" << endl;
	cout << "La división de " << dividendo << " / " << divisor << " = " << resultadodivision << "\n" << endl;
	cout << "La potenciación de " << base << " ^ " << potencia << " = " << resultadopotenciacion << "\n" << endl;
	cout << "El módulo de " << modulo1 << " % " << modulo2 << " = " << resultadomodulo << "\n" << endl;
	cout << "La división entera de " << dividendoentero << " // " << divisorentero << " = " << resultadodivisionentera << "\n" << endl;

	//Operadores de comparación

	cout << "\nOperadores de comparación\n";
	if (igualdadnumero1 == igualdadnumero2) {
		cout << "Igualdad de " << igualdadnumero1 << " == " << igualdadnumero2 << " = True\n" << endl;
	}
	else
		cout << "Igualdad de " << igualdadnumero1 << " == " << igualdadnumero2 << " = False\n" << endl;

	if (mayoroigual1 >= mayoroigual2) {
		cout << "Mayor o igual de " << mayoroigual1 << " >= " << mayoroigual2 << " = True\n" << endl;
	}
	else
		cout << "Mayor o igual de " << mayoroigual1 << " >= " << mayoroigual2 << " = False\n" << endl;

	if (menoroigual1 <= menoroigual2) {
		cout << "Menor o igual de " << menoroigual1 << " <= " << menoroigual2 << " = True\n" << endl;
	}
	else
		cout << "Menor o igual de " << menoroigual1 << " <= " << menoroigual2 << " = False\n" << endl;

	if (mayor1 > mayor2) {
		cout << "Mayor de " << mayor1 << " > " << mayor2 << " = True\n" << endl;
	}
	else
		cout << "Mayor de " << mayor1 << " > " << mayor2 << " = False\n" << endl;

	if (menor1 < menor2) {
		cout << "Menor de " << menor1 << " < " << menor2 << " = True\n" << endl;
	}
	else
		cout << "Menor de " << menor1 << " < " << menor2 << " = False\n" << endl;

	if (diferente1 != diferente2) {
		cout << "Diferente de " << diferente1 << " <> " << diferente2 << " = True\n" << endl;
	}
	else
		cout << "Diferente de " << diferente1 << " <> " << diferente2 << " = False\n" << endl;

	//Operadores lógicos

	cout << "\nOperadores lógicos\n";

	if (resultadosuma == logicoand1 && resultadoresta == logicoand2) {
		cout << "[La suma de " << suma1 << " + " << suma2 << " = " << logicoand1 << " and "
			<< "La resta de " << resta1 << " - " << resta2 << " = " << logicoand2 << "] True\n" << endl;
	}
	else
		cout << "[La suma de " << suma1 << " + " << suma2 << " = " << logicoand1 << " and "
		<< "La resta de " << resta1 << " - " << resta2 << " = " << logicoand2 << "] False\n" << endl;

	if (resultadoresta == logicoor1 || resultadomultiplicacion == logicoor2) {
		cout << "[La resta de " << resta1 << " - " << resta2 << " = " << logicoor1 << " or "
			<< "La multiplicación de " << multiplicacion1 << " * " << multiplicacion2 << " = " << logicoor2 << "] True\n" << endl;
	}
	else
		cout << "[La resta de " << resta1 << " - " << resta2 << " = " << logicoor1 << " or "
		<< "La multiplicación de " << multiplicacion1 << " * " << multiplicacion2 << " = " << logicoor2 << "] False\n" << endl;

	bool logicomultiplicacion = (resultadomultiplicacion == logiconot1);
	bool logicodivision = (resultadodivision == logiconot2);

	if (logicomultiplicacion && !logicodivision) {
		cout << "[La multiplicación de " << multiplicacion1 << " * " << multiplicacion2 << " = " << logiconot1 << " not "
			<< "La división de " << dividendo << " / " << divisor << " = " << logiconot2 << "] True\n" << endl;
	}
	else
		cout << "[La multiplicación de " << multiplicacion1 << " * " << multiplicacion2 << " = " << logiconot1 << " not "
		<< "La división de " << dividendo << " / " << divisor << " = " << logiconot2 << "] False\n" << endl;

	//Operadores de asignación

	cout << "\nOperador de asignación\n";
	mi_numero = 11;
	cout << "Asignación: " << mi_numero << endl; // Asignación
	mi_numero++;
	cout << "Asignación y suma: " << mi_numero << endl; // Asignación y suma
	mi_numero--;
	cout << "Asignación y resta: " << mi_numero << endl; // Asignación y resta
	mi_numero *= 27;
	cout << "Asignación y multiplicación: " << mi_numero << endl; // Asignación y multiplicación
	mi_numero /= 3;
	cout << "Asignación y división: " << mi_numero << endl; // Asignación y división
	mi_numero %= 2;
	cout << "Asignación y módulo: " << mi_numero << endl; // Asignación y módulo
	mi_numero ^= 2;
	cout << "Asignación y potencia: " << mi_numero << endl; // Asignación y potencia
	mi_numero /= 4;
	(int)mi_numero; // Casting no necesario aquí, ya que no se utiliza.
	cout << "Asignación y división entera: " << mi_numero << endl; // Asignación y división entera

	//Los operadores de identidad 

	/*En C++ se usan como operadores de comparación. En este caso, utilizaremos dos punteros para conocer
	si están apuntando al mismo destino. Leer la nota en operadores de identidad variables donde los objetos se denominan como int* puntero */

	cout << "\nOperadores de identidad" << endl;
	mi_numero = 10;
	if (puntero_A == puntero_B)
		cout << "\n[Mi variable número es " << mi_numero << " igual a puntero] True " << endl;
	else
		cout << "\n[Mi variable número es " << mi_numero << " igual a puntero] False " << endl;

	//Operadores de pertenencia
	/*Se pueden hacer operadores de pertenencia en este caso son un vector*/

	value = 20;
	int* vector = new int[talla]; // Creación del vector dinámico

	cout << "\nOperadores de pertenencia\n";
	for (a = 0; a < talla; a++) { // Corregido el límite del bucle
		vector[a] = a * 10;
	}
	for (a = 0; a < talla; a++) { // Corregido el límite del bucle

		cout << "[" << a << "] " << vector[a] << "\n";

	}
	auto it = find(vector, vector + talla, value);
	if (it != vector + talla) {
		cout << "Valor encontrado en: [" << (it - vector) << "] " << value << endl;
	}
	else
		cout << "No encontrado" << endl;

	delete[] vector; // Liberar memoria del vector dinámico

	//Operadores binarios

	numero_A = 5; // 0101
	numero_B = 10; // 1010
	resultado_binario_or = numero_A | numero_B;
	resultado_binario_and = numero_A & numero_B;
	resultado_binario_xor = numero_A ^ numero_B;
	resultado_binario_not = ~numero_A;
	desplazamiento = 2;
	resultado_binario_desplazamiento = numero_B << desplazamiento;

	cout << "\nOperadores binarios" << endl;

	cout << "Or binaria de " << numero_A << " or " << numero_B << " resultado: " << resultado_binario_or << endl;
	cout << "And binaria de " << numero_A << " and " << numero_B << " resultado: " << resultado_binario_and << endl;
	cout << "Xor binaria de " << numero_A << " xor " << numero_B << " resultado: " << resultado_binario_xor << endl;
	cout << "Not binaria de " << numero_A << " con not es  " << resultado_binario_not << endl;
	cout << "Desplazamiento binario del número " << numero_B << " tenemos un desplazamiento de " << desplazamiento << " nos da: "
		<< resultado_binario_desplazamiento << endl;

	//Condiciones de control
	cout << "\nCondiciones de control" << endl;

	cout << "Condición anidada" << endl;
	if (mi_cadena == "Hola, Jonathan") {
		cout << "Mi string sí es " << mi_cadena << endl;
	}
	else if (mi_cadena == "Hola, rebelde sin causa") {
		cout << "Mi string sí es " << mi_cadena << endl;
	}
	else
		cout << "Mi string no es: 'Hola, Jonathan' ni 'Hola, rebelde sin causa' " << endl;

	//Condiciones iterativas
	cout << "\nCondiciones iterativas" << endl;
	/*De las condiciones de control, el bucle for es el más usado.
	Hay muchas maneras de usarlo, sin embargo, esta es la más
	común de utilizar. Esto depende de tu gusto y necesidad.*/

	//For
	for (iterativa_for = 0; iterativa_for < 6; iterativa_for++) { // Corregido el límite del bucle
		cout << "For entrada [" << iterativa_for << "]" << endl;
	}

	//While
	while (contador_while <= 2) {
		cout << "While entrada [" << contador_while << "]" << endl;
		contador_while++;
	}

	//Do while
	do {
		cout << "ingresa 1 para salir" << endl;
			cin >> do_while_salir;
	} while (do_while_salir != 1);
	
	//Manejo de excepciones
	class ResourceHandler {
	public:
		ResourceHandler() {
			cout << "Recurso adquirido" << endl;
		}
		~ResourceHandler() {
			cout << "Recurso liberado" << endl;
		}
	};
	try {
		divisor_excepcion = 0; // Declaramos la variable del divisor para después entrar a la estructura anidada si es divisor '0'.
		if (divisor_excepcion == 0) {
			throw runtime_error("Error: División por cero");
		}
		resultado = 1 / divisor_excepcion; // Hacemos la operación
		cout << "Resultado: " << resultado << endl;
		ResourceHandler resource;
	}
	catch (const runtime_error& e) {
		cerr << "Se ha producido una excepción: " << e.what() << endl;
	}
	catch (...) {
		cerr << "Se ha producido una excepción desconocida" << endl;
	}
	//::::::::::::::Dificultad extra:::::::::::::::
	//Número del 10 al 55 que no sea 16 ni múltiplos de 3
	cout <<"Dificultad extra [1]"<<endl<< "Número del 10 al 55 que no sea 16 ni múltiplos de 3" << endl;
	numero = 10;
	auxiliar = 12;
	while (numero <= 55) {
		if (numero < auxiliar) {
			cout << numero << endl;       // Imprime 'numero' si es menor que 'auxiliar'
			numero = numero + 2;          // Incrementa 'numero' en 2
		}
		else if (numero == auxiliar) {
			numero = numero + 2;          // Incrementa 'numero' en 2

			if (numero < 54) {
				auxiliar = auxiliar + 3;  // Incrementa 'auxiliar' en 3 si 'numero' es menor que 54
				cout << numero << endl;   // Imprime el valor actualizado de 'numero'
				numero = numero + 2;      // Incrementa 'numero' en 2 nuevamente
			}

			if (numero == 16) {
				numero = numero + 2;      // Incrementa 'numero' en 2 si es igual a 16
				auxiliar = auxiliar + 3;  // Incrementa 'auxiliar' en 3
			}
		}
		else
			auxiliar = auxiliar + 3;      // Incrementa 'auxiliar' en 3 si 'numero' es mayor que 'auxiliar'
	}

	cout << "Dificultad extra [2]" << endl << "Número del 10 al 55 que no sea 16 ni múltiplos de 3" << endl;

	int i;
	for (int i = 10; i <= 55; i++) {
		if (i != 16 && i % 2 == 0 && i % 3 != 0) {
			cout << i << endl;
		}
	}
	return 0;
}
