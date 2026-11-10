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


class Rectangulo: public Figura{
	private:
		float base;
		float altura;
	public:
		Rectangulo(string,float,float);
		void calcularArea();
};

Rectangulo::Rectangulo(string col,float bas,float alt) : Figura(col){
	base=bas;
	altura=alt;
}

void Rectangulo::calcularArea(){
	float area;
	
	area= base*altura;
	cout<<"Area del rectangulo: "<<area<<endl;
}


class Triangulo: public Figura{
	private:
		float base;
		float altura;
		string tipo;
	public:
		Triangulo(string,float,float,string);
		void calcularArea();
};

Triangulo::Triangulo(string col,float bas,float alt,string tip):Figura(col){
	base=bas;
	altura=alt;
	tipo=tip;
}

void Triangulo::calcularArea(){
	float area;
	
	area= (base*altura)/2;
	cout<<"Area del triangulo: "<<area;
}


int main(){
    string colorCIR, colorREC, colorTRI, tipo;
    float radioCIR, baseREC, alturaREC, baseTRI, alturaTRI;

    cout<<" CIRCULO"<<endl;
    cout<<"Ingrese el color: ";
    cin>>colorCIR;
    cout<<"Ingrese el radio: ";
    cin>>radioCIR;

    Circulo c1(colorCIR,radioCIR);

    cout<<"\n RECTANGULO"<<endl;
    cout<<"Ingrese el color: ";
    cin>>colorREC;
    cout<<"Ingrese la base: ";
    cin>>baseREC;
    cout<<"Ingrese la altura: ";
    cin>>alturaREC;

    Rectangulo r1(colorREC,baseREC,alturaREC);

    cout<<"\n TRIANGULO"<<endl;
    cout<<"Ingrese el color: ";
    cin>>colorTRI;
    cout<<"Ingrese la base: ";
    cin>>baseTRI;
    cout<<"Ingrese la altura: ";
    cin>>alturaTRI;
    cout<<"Ingrese el tipo: ";
    cin>>tipo;

    Triangulo t1(colorTRI,baseTRI,alturaTRI,tipo);

    cout<<"\n\n\tRESULTADOS"<<endl;

    cout<<"\n CIRCULO"<<endl;
    c1.mostrarColor();
    c1.calcularArea();
    c1.calcularPerimetro();

    cout<<"\nRECTANGULO"<<endl;
    r1.mostrarColor();
    r1.calcularArea();

    cout<<"\nTRIANGULO"<<endl;
    t1.mostrarColor();
    t1.calcularArea();

    return 0;
}
