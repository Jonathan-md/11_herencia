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
	cout<<"Velocidad: "<<velocimetro<<" Km/h."<<endl;
}

void Vehiculo::cambiarVelocidad(){
}


class Automovil: public Vehiculo{
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
	
	cout<<"Ingrese la cantidad de pasajeros que van a subir al Automovil: ";
	cin>>sumPasajeros;
	if(sumPasajeros>0){
		cantidadPasajeros=cantidadPasajeros+sumPasajeros;
	}
}

void Automovil::bajarPasajeros(){
	int resPasajeros;
	
	cout<<"Ingrese la cantidad de pasajeros que van a bajar del Automovil:";
	cin>>resPasajeros;
	if(cantidadPasajeros>=0){
		if(cantidadPasajeros>=resPasajeros){
			cantidadPasajeros=cantidadPasajeros-resPasajeros;
		}
	}
}

class Camion: public Vehiculo{
	private:
		float carga;
	public:
		Camion(string, string, string, float, float);
		void mostrarCamion();
		void cambiarCarga();
};

Camion::Camion(string nP, string col, string marc, float velcm, float carg): Vehiculo(nP,col,marc,velcm){
	carga=carg;
}

void Camion::mostrarCamion(){
	cout<<"Carga: "<<carga<< "Kg."<<endl;
}

void Camion::cambiarCarga(){
	float cambiaCarga;
	
	cout<<"Ingrese el peso de la nueva carga: ";
	cin>>cambiaCarga;
	if(cambiaCarga>0){
		carga=cambiaCarga;
	}
}


int main(){
	
	
	return 0;	
}
