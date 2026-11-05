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


int main(){
	
	
	return 0;	
}
