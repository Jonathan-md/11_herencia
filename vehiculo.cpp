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

int main(){
	
	
	return 0;	
}
