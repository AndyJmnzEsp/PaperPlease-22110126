#include <iostream>
using namespace std;

struct Papeles {
	int Pasaporte;
	int ID;
	int Ticket;
	Papeles* siguiente;
};
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

struct Ident {
	int id;
	string Nombre;
	string Apellido;
	float Altura;
	int Peso;
	int No_Identificacion;
	string Fecha_Nac;
	Ident* siguiente;
};

struct Ticket {
	int Id;
	string Nombre;
	string Apellido;
	string Caducidad;
	string Destino;
	Ticket* siguiente;
};

class Person {
	public:
		Person() {

		}

		void CrearDocumentos(Papeles*& papeles, int pasaporte, int id, int ticket) {
			Papeles* nuevo_nodo = new Papeles();
			nuevo_nodo->Pasaporte = pasaporte;
			nuevo_nodo->ID = id;
			nuevo_nodo->Ticket = ticket;

			Papeles* aux1 = papeles;
			Papeles* aux2 = papeles;

			while ((aux1 != NULL) && (aux1->Pasaporte < pasaporte)) {
				aux2 = aux1;
				aux1 = aux1->siguiente;
			}
			if (papeles == aux1) {
				papeles = nuevo_nodo;
			}
			else {
				aux2->siguiente = nuevo_nodo;
			}
			nuevo_nodo->siguiente = aux1;
		}

		void MostrarDocumentos(Papeles*& documentos) {
			Papeles* actual = new Papeles();

			actual = documentos;

			while (actual != NULL) {
				cout << actual->Pasaporte << " -> " << actual->ID <<" -> " << actual->Ticket<<"\n";
				actual = actual->siguiente;
			}
		}
		void CrearPasaporte(Pasaporte*& pasaporte, int Id, string Nombre, string Apellido, string Sexo, string Fecha_Nac, string Caducidad, int No_Pasaporte, string Nacionalidad) {
			Pasaporte* Nuevo_Pas = new Pasaporte();
			Nuevo_Pas->Id = Id;
			Nuevo_Pas->Nombre = Nombre;
			Nuevo_Pas->Apellido = Apellido;
			Nuevo_Pas->Sexo = Sexo;
			Nuevo_Pas->Fecha_Nac = Fecha_Nac;
			Nuevo_Pas->Caducidad = Caducidad;
			Nuevo_Pas->No_Pasaporte = No_Pasaporte;
			Nuevo_Pas->Nacionalidad = Nacionalidad;

			Pasaporte* aux1 = pasaporte;
			Pasaporte* aux2 = pasaporte;

			while ((aux1 != NULL) && (aux1->Id < Id)) {
				aux2 = aux1;
				aux1 = aux1->siguiente;
			}
			if (pasaporte == aux1) {
				pasaporte = Nuevo_Pas;
			}
			else {
				aux2->siguiente = Nuevo_Pas;
			}
			Nuevo_Pas->siguiente = aux1;
		}

		void MyBPasaportes(Pasaporte*& pasaporte, int Id){
			bool b = false;
			Pasaporte* actual = new Pasaporte();
			actual = pasaporte;

			while((actual != NULL) && (actual->Id <= Id)) {	
				if (actual->Id == Id) {
					b = true;
					cout << "-----------P A S A P O R T E-------------\n";
					cout << "| Nombre:            |" << actual->Nombre << endl;
					cout << "| Apellido:          |" << actual->Apellido << endl;
					cout << "| Sexo:              |" << actual->Sexo << endl;
					cout << "| Fecha Nacimiento:  |" << actual->Fecha_Nac << endl;
					cout << "| Caducidad:         |" << actual->Caducidad << endl;
					cout << "| No Pasaporte:      |" << actual->No_Pasaporte << endl;
					cout << "| Nacionalidad:      |" << actual->Nacionalidad << endl;
					cout << "------------------------------------------\n\n";
				}
				actual = actual->siguiente;
			}

			if (b == true) {
				return;
			}
			
		}

		void CrearId(Ident*& ident, int id, string Nombre, string Apellido, float Altura, float Peso, int No_Ident, string Fecha_Nac) {
			Ident* Nueva_Ident = new Ident;
			Nueva_Ident->id = id;
			Nueva_Ident->Nombre = Nombre;
			Nueva_Ident->Apellido = Apellido;
			Nueva_Ident->Peso = Peso;
			Nueva_Ident->No_Identificacion = No_Ident;
			Nueva_Ident->Fecha_Nac = Fecha_Nac;

			Ident* aux1 = ident;
			Ident* aux2 = ident;

			while ((aux1 != NULL) && (aux1->id < id)) {
				aux2 = aux1;
				aux1 = aux1->siguiente;
			}
			if (ident == aux1) {
				ident = Nueva_Ident;
			}
			else {
				aux2->siguiente = Nueva_Ident;
			}
			Nueva_Ident->siguiente = aux1;
		
		}
		void MyBId() {

		}
		void CrearTicket(Ticket*& ticket, int id, string Nombre, string Apellido, string Caducidad, string Destino) {
			Ticket* Nuevo_ticket = new Ticket;

			Nuevo_ticket->Id = id;
			Nuevo_ticket->Nombre = Nombre;
			Nuevo_ticket->Apellido = Apellido;
			Nuevo_ticket->Caducidad = Caducidad;
			Nuevo_ticket->Destino = Destino;

			Ticket* aux1 = ticket;
			Ticket* aux2 = ticket;

			while ((aux1 != NULL) && (aux1->Id < id)) {
				aux2 = aux1;
				aux1 = aux1->siguiente;
			}
			if (ticket == aux1) {
				ticket = Nuevo_ticket;
			}
			else {
				aux2->siguiente = Nuevo_ticket;
			}
			Nuevo_ticket->siguiente = aux1;
		}

		void MyBTicket() {

		}


	

};