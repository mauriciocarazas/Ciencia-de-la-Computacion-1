#include "Conserge.h"


Conserje::Conserje(string nombre, int dni,Cumple cumple, string _edificio, int _llaves) :Persona(nombre, dni,cumple), edificio(_edificio), llaves(_llaves) {}
virtual const string Conserje::mostrarDatos() {
	return "El conserje " + nombre + " del edificio de " + edificio + " con numero de llaves :"+to_string(llaves) + " su numero de dni es :" + to_string(dni)+ " con la edad de :"+ to_string(cumple.mostrarEdad());
}
virtual const string conserge::mostrarNombre(){
    return nombre;

}
const int  Conserje::mostrarllaves() {
	return llaves;

}
const string Conserje::mostraredificio() {
	return edificio;
}
