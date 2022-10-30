#include <iostream>
#include "Persona.cpp"
#include "Docs.cpp"

using namespace std;

class inputManager {
public:
	int Estado;
	int Puntaje = 0;
	int resp;

	void Run() {
		Titulo();
		Indicaciones();
		Secuencia();
	}

	void Titulo() {
		cout << "\t\t\t\t\t---------------------------------\n";
		cout << "\t\t\t\t\t\tP   A   P   E   R \n";
		cout << "\t\t\t\t\t\t   P L E A S E     \n";
		cout << "\t\t\t\t\t---------------------------------\n\n\n";

	}

	void Indicaciones() {
		
		cout << "\t\t\t\t\tBienvenido a la embajada Mexicana...\n" << "\t\t\tTu trabajo es evitar que las personas incorrectas no entren al pais...\n\n";

		cout << "\t\t\t\t\tEn el primer dia deberas de corroborar\n" << "\t\t\tque UNICAMENTE las personas con nacionalidad MEXICANA sean aprovadas...\n\n\n\n";
		cout << "\t\t\t\t\tEn el segundo dia deberas de corroborar\n" << "\t\t\tque la INE y el PASAPORTE correspondan a la misma persona...\n\n\n\n";
		cout << "\t\t\t\t\tEn el ultimo dia deberas de corroborar\n" << "\t\t\tque el pase de abordar de la persona corresponda a la persona y a un destino valido...\n\n\n\n";

		cout << "\t\t\t\t\t\tListo?????\n\n\n";

		system("PAUSE");

	}

	void Secuencia() {
		system("CLS");
		Titulo();
		cout << "\t\t\t\t\t\t   26/10/2022\n\n\n";
		cout << "\t\t\t\t\t\t   Puntaje: " << Puntaje << "\n\n\n";

	
		Person persona = Person();
		Papeles* DocumentosL = NULL;
		Pasaporte* PasaportesL = NULL;

		persona.CrearDocumentos(DocumentosL, 1, 1, 1);
		persona.CrearDocumentos(DocumentosL, 2, 2, 2);
		persona.CrearDocumentos(DocumentosL, 3, 3, 3);
		persona.CrearPasaporte(PasaportesL, 1, "Fernando", "Adame", "H", "11/09/2000", "25/12/2025", 1456, "M E X I C A N A");
		persona.CrearPasaporte(PasaportesL, 2, "Daniel", "Sanchez", "H", "22/03/2001", "25/10/2022", 6578, "M E X I C A N A");
		persona.CrearPasaporte(PasaportesL, 3, "Ana", "Lopez", "M", "28/01/1990", "14/12/2027", 8953, "A M E R I C A N A");
		//persona.CrearPasaporte(PasaportesL, 4, "Alejandro", "Vazquez", "H", "04/06/1980", "12/12/2025", 8752, "A M E R I C A N A");
		//persona.CrearPasaporte(PasaportesL, 5, "Lorena", "Garcia", "M", "14/10/1998", "06/05/2026", 2938, "F R A N C E S A");


		Dia1(PasaportesL, persona);
		Final();
	}

	void Dia1(Pasaporte*& pasaporteL, Person persona) {
		int Ident = 1;

		for (int i = 1; i <= 3; i++) {
			persona.MyBPasaportes(pasaporteL, Ident);
			cout << "Sus datos son Correctos?...(1 = Denegado | | 2 = Aprovado)\n\n";
			cin >> Estado;

			if (Estado == 2 && Ident == 1) {
				cout << "Correcto";
				Puntaje = Puntaje + 50;
			}
			else if(Estado == 2 && Ident == 2 ) {
				Puntaje = Puntaje - 10;
			}
			else if (Estado == 2 && Ident == 3) {
				Puntaje = Puntaje - 10;
			}
			else if(Estado == 1 && Ident == 2 ) {
				Puntaje = Puntaje + 5;
			}
			else if (Estado == 1 && Ident == 3) {
				Puntaje = Puntaje + 5;
			}

			else if (Estado == 1 && Ident == 1) {
				Puntaje = Puntaje - 5;
			}

			Ident = Ident++;
			system("CLS");
			Titulo();
			cout << "\t\t\t\t\t\t   26/10/2022\n\n\n";
			cout << "\t\t\t\t\t\t   Puntaje: " << Puntaje << "\n\n\n";
		}
	}

	void Final() {
		if (Puntaje <= 30) {
			cout << "Lo siento tu hijo enfermo y no te alcaza para las medicinas :(\n\n";
		}
		else if (Puntaje == 60) {
			cout << "Excelente trabajo, tu ganancia fue la maxima, disfruta tu dinero :)\n\n";
		}
		else if (Puntaje <= 50) {
			cout << "Puedes pagar la renta  y la medicina de tu hijo pero quedaste en 0s \n\n";
		}

		cout << "Deseas volver a jugar? (1 = Si, 2 = No)\n\n\n";
		cin >> resp;
		if (resp == 1) {
			Run();
		}
		else {
			system("PAUSE");
		}
	}
};