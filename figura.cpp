#include<iostream>
#include<cmath>
#include<string>
using namespace std;

class Figura{
	protected:
		string color;
	public:
		Figura(string);
		void mostrarColor();
};

Figura::Figura(string col){
	color=col;
}

void Figura::mostrarColor(){
	cout<<"Color: "<<color<<endl;
}

class Circulo: public Figura{
	private:
		float radio;
	public:
		Circulo(string,float);
		void calcularArea();
		void calcularPerimetro();
};

Circulo::Circulo(string col,float rad) : Figura(col){
	radio=rad;
}

void Circulo::calcularArea(){
	float area;
	
	area= 3.1416*pow(radio,2);
	cout<<"Area del circulo: "<<area<<endl;
}

void Circulo::calcularPerimetro(){
	float perimetro;
	
	perimetro= 2*3.1416*radio;
	cout<<"Perimetro del circulo: "<<perimetro<<endl;
}

int main(){
	
	return 0;
}
