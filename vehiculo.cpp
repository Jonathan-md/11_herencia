#include<iostream>
#include<string>
using namespace std;

class Vehiculo{
	protected:
		string numeroPlaca;
		string color;
		string marca;
		float velocimetro;
				
	public:
		Vehiculo(string, string, string, float);
		void mostrarDatos();
		void cambiarVelocidad();
};

Vehiculo::Vehiculo(string nP, string col, string marc, float velcm){
	numeroPlaca=nP;
	color=col;
	marca=marc;
	velocimetro=velcm;
}

void Vehiculo::mostrarDatos(){
	cout<<"Numero de placa: "<<numeroPlaca<<endl;
	cout<<"Color: "<<color<<endl;
	cout<<"Marca: "<<marca<<endl;
	cout<<"Velocidad: "<<velocimetro<<endl;
}

void Vehiculo::cambiarVelocidad(){
}


class Automovil : public Vehiculo{
	private:
		int cantidadPuertas;
		int cantidadPasajeros;
		
	public:
		Automovil(string, string, string, float, int,int);
		void mostrarAutomovil();
		void subirPasajeros();
		void bajarPasajeros();
};

Automovil::Automovil(string nP, string col, string marc, float velcm, int cantPuertas, int cantPasj) : Vehiculo(nP,col,marc,velcm){
	cantidadPuertas=cantPuertas;
	cantidadPasajeros=cantPasj;
}

void Automovil::mostrarAutomovil(){
	cout<<"Numero de puertas: "<<cantidadPuertas<<endl;
	cout<<"Numero de pasajeros: "<<cantidadPasajeros<<endl;
}

void Automovil::subirPasajeros(){
	int sumPasajeros;
	
	if(sumPasajeros>0){
		cantidadPasajeros=cantidadPasajeros+sumPasajeros;
	}
}

void Automovil::bajarPasajeros(){
	int resPasajeros;
	
	if(cantidadPasajeros>=0){
		if(cantidadPasajeros>=resPasajeros){
			cantidadPasajeros=cantidadPasajeros-resPasajeros;
		}
	}
}


int main(){
	
	
	return 0;	
}
