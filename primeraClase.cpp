#include <iostream>
#include <stdlib.h>
using namespace std;

class Circulo{
	private: // declaramos atributos
		float PI;
		float radio;
	public:
		Circulo(float); //delcarar metodos
		void calcularArea(); 
		void calcularPerimetro();
		float getRadio();
};

Circulo::Circulo(float _radio){ //inializa los atributos
	radio=_radio;
	PI=3.1416;
}

void Circulo::calcularArea(){ //inicializas el metodo
	 cout<< PI * radio *radio<<endl;
}

void Circulo::calcularPerimetro(){
	 cout<< 2 *PI * radio<<endl;
}

float Circulo::getRadio(){
	 return radio;
}


int main(){
	Circulo c1 = Circulo(11); //Cree el primer objeto 1
	Circulo c2 = Circulo(15); //Cree el 2do objeto
	
    cout<<("El area es: ");
	c1.calcularArea();
	cout<<("El radio es:")<<c2.getRadio()<<endl;

	system("pause");
	
	return 0;
}
