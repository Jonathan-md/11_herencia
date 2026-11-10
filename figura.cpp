#include<iostream>
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

int main(){
	
	return 0;
}
