#include <windows.h>
#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

int main () {
	
	char nuevo_nombre[255];
	cout << "Ingrese el nuevo Nombre de usuario:";
	// linea para obtener nuevo nombre
	cin.getline(nuevo_nombre,255);
	// muestra el valor que se guardara
	cout << "el valor a guardar en el nuevo CFG:" << nuevo_nombre<< endl;
	getch();
	
	// Creacion del archivos CFG
	ofstream nuevo_cfg("C:\\Games\\Counter-Strike\\cstrike\\usuario.cfg"); // doble \ para que detecte que sea un directorio/carpetae
	nuevo_cfg << "name \x22" << nuevo_nombre << "\x22" << endl;
	nuevo_cfg.close();
}
