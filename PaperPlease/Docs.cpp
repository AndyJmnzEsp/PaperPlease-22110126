/*#include <iostream>
#include "Persona.cpp"
using namespace std;

struct Pasaporte {
	int Id;
	string Nombre;
	string Apellido;
	string Sexo;
	string Fecha_Nac;
	string Caducidad;
	int No_Pasaporte;
	string Nacionalidad;
	Pasaporte* siguiente;
};

struct Id {
	int Id;
	string Nombre;
	string Apellido;
	float Altura;
	int Peso;
	int No_Identificacion;
	string Fecha_Nac;
};

struct Ticket {
	string Nombre;
	string Caducidad;
	string Destino;
};

class Docs {
	public:
		void imprimirDatos() {
			cout << "-----P A S A P O R T E--------\n";
			cout << "Nombre";
		}
	void CrearPasaporte(Pasaporte*& pasaporte, int Id, string Nombre, string Apellido, string Sexo, string Fecha_Nac, string Caducidad, int No_Pasaporte, string Nacionalidad) {
			
		Pasaporte* nuevo_nodo = new Pasaporte();
		nuevo_nodo->Id = Id;
		nuevo_nodo->Nombre = Nombre;
		nuevo_nodo->Apellido = Apellido;
		nuevo_nodo->Sexo = Sexo;
		nuevo_nodo->Fecha_Nac = Fecha_Nac;
		nuevo_nodo->Caducidad = Caducidad;
		nuevo_nodo->No_Pasaporte = No_Pasaporte;
		nuevo_nodo->Nacionalidad = Nacionalidad;

		Pasaporte* aux1 = pasaporte;
		Pasaporte* aux2 = pasaporte;

		while ((aux1 != NULL) && (aux1->Id < Id)) {
			aux2 = aux1;
			aux1 = aux1->siguiente;
		}
		if (pasaporte == aux1) {
			pasaporte = nuevo_nodo;
		}
		else {
			aux2->siguiente = nuevo_nodo;
		}
		nuevo_nodo->siguiente = aux1;
	}

	void MostrarPasaportes(Pasaporte*& pasaporte) {
		Pasaporte* actual = new Pasaporte();

		actual = pasaporte;

		while (actual != NULL) {
			cout << "Nombre: " << actual->Nombre << endl;
			cout << "Apellido: " << actual->Apellido << endl;
			cout << "Sexo: " << actual->Sexo << endl;
			cout << "Fecha de Nacimiento: " << actual->Fecha_Nac << endl;
			cout << "Caducidad: " << actual->Nombre << endl;
			cout << "No. Pasaporte: " << actual->Nombre << endl;
			cout << "Nacionalidad: " << actual->Nombre << endl;


			actual = actual->siguiente;
		}
	}

};*/