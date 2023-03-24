// Datei: wortspiegel_main.cpp

#define CATCH_CONFIG_RUNNER
#include "catch.h"

#include <iostream>
#include <string>
using namespace std;

#include "wortfunktionen.h"
#include "bildschirm.h"


int main()
{
	// Aufruf der Unit Tests ...
	Catch::Session().run();
	string ins = " ";
	char Bef = ' ';
	int p = 0;
	cout << "Bitte geben Sie den Text ein: ? ";
	
	//1. Eingabe der Textzeile
	getline(cin,ins);
	
	//2. Endlosschleife:
	do {
		//2a.Ausgabe der Textzeile und der Zeile mit dem Sternchen
		ausgabe(ins, p);
		
		// 2b. Abfrage der Kommandoeingabe
		Bef=eingabe();
		
		/*2c.Auswertung des eingegebenen Kommandos
			Insbes.Aufruf der wortspiegel() Funktion beim Kommando 's'*/
		if (Bef == 'r') {
			p++;
			if (p >= ins.length())
				p = ins.length() - 1;
		}
		else if (Bef == 'l' && p >= 0) {
			p--;
			if (p < 0)
				p = 0;
		}
		else if (Bef == 's') {
			wortspiegel(ins, p);
		}
		else {
			break;
		}
	} while (Bef != 'q');

	system("PAUSE");
	return 0;
}
