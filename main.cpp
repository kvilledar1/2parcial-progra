#include <iostream>
#include <fstream>
#include <filesystem>
#include "windows.h"

void crearArchivos(int cantidad);
int contarArchivosDeDirectorio();
void listarArchivosDeDirectorio();
void mostrarDetalles();
void buscarArchivosPorNombre(std::string nombreArchivo);

using namespace std;

int main()
{
    int cantidad;
    string nombreArchivo;
    cout<<"Hola,  por favor indica que deseas crear \n";
    cout << "escriba la cantidad de archivos a crear \n";
    cin >> cantidad;
    crearArchivos(cantidad);

    return 0;
}
void crearArchivos(int cantidad) {
    string nombreArchivo="archivo";
    if(cantidad %2==0){
        int i= cantidad;

        for(i=0; i<cantidad; i++){
            ofstream file;
            file.open("C:/Users/Usuario/Documents/par/" + nombreArchivo + to_string(i) +".txt");
            file << "Texto \n";
            file << "Hola, \n";
            file << "Mi numero par\n";
            file.close();
        }
        cout<<"Archivos creados : " + to_string(i);
    }else{
        int i= cantidad;

        for(i=0; i<cantidad; i++){
            ofstream file;
            file.open("C:/Users/Usuario/Desktop/impar/" + nombreArchivo + to_string(i) +".txt");
            file << "Texto \n";
            file << "Hola,\n";
            file << "Mi nombre es impar\n";
            file.close();
        }
        cout<<"Archivos creados : " + to_string(i);

    }
}