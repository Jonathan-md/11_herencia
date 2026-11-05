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


int main(){
	
	
	return 0;	
}
