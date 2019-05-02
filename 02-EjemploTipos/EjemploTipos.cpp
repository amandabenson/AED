/*
# Trabajo #2 – Ejemplos de Valores y Operaciones de Tipos de Datos #
Nombre y apellido: Amanda Vanesa Benson
1/5/2019
*/
#include <iostream>
#include <stdbool.h>
#include <conio.h>
#include <locale.h>

using namespace std;
// Funcion que verifica si el usuario ha ingresado el resultado de una suma correctamente
bool prueba(double respuesta){
    if(respuesta == 3.5)
    { return true;
}
else
 {
    return false;
}
}


int main(){
 setlocale(LC_ALL,"Spanish");
//Pedimos al usuario que ingrese su nombre - Uso de string

string nombre = "Vanesa";
std::cout << "Mi nombre es " + nombre<<endl;



std::cout << "Hagamos una suma:  2.5 mas 1 \n";
double respuesta = 3.5;
std::cout << "El resultado es: "<<respuesta<<endl;
// Comprobamos que la respuesta es correcta
bool opcion = 0;
opcion = prueba(respuesta);
if ( opcion == true) //Si el resultado es correcto, el usuario accede a la encuesta 
{
std::cout << "Mi resultado es correcto! \n";
int nac = 1999;
std::cout << "Naci en 1999 \n";

int edad = 2019 - nac;
std::cout << "Por lo tanto tengo "<<edad<<endl;
char turno = 'n';
std::cout << "Curso en UTN y hay 3 turnos: M/T/N \n"; //Le pedimos al usuario que ingrese el turno que cursa

string nuevoTur ;
switch (turno){
    case 'm': 
    nuevoTur = "mañana";
    break;
    case 't': 
    nuevoTur = "tarde";
    break;
    case 'n':
    nuevoTur = "noche";
}
std::cout << "Asisto al turno: " + nuevoTur + "\n" ; 
unsigned short int materias = 4;
std::cout << "Actualmente estoy cursando: "<< materias<<" materias \n"; //Le pedimos al usuario que ingrese cantidad de materias que esta cursando - Uso de unsigned
std::cout <<"Gracias por leer!";

system("pause");
}
else{
std::cout << "La respuesta no es correcta!";
system("pause");
}
}
