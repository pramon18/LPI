#include <iostream>
#include "testClass.h"


int main(){
	teste t, som, sub, mult;

	t.set_A(2);
	t.set_B(4);
	t.set_key(6);
	
	som.set_A(t.soma(t.get_A(),t.get_B()));
	sub.set_A(t.subtracao(t.get_B(),t.get_key()));
	mult.set_A(t.multiplicacao(t.get_A(),t.get_key()));
	
	som.set_B(0);
	sub.set_B(0);
	mult.set_B(0);
	som.set_key(0);
	sub.set_key(0);
	mult.set_key(0);

	std::cout << "Valor de A = [" << t.get_A() << "]" << std::endl;
	std::cout << "Valor de B = [" << t.get_B() << "]" << std::endl;
	std::cout << "Valor de Key = [" << t.get_key() << "]" << std::endl;
	std::cout << "Valor da soma de A e B= [" << som.get_A() << "]" << std::endl;
	std::cout << "Valor da Subtração entre B e Key = [" << sub.get_A() << "]" << std::endl;
	std::cout << "Valor de multiplicacao entre A e Key = [" << mult.get_A() << "]" << std::endl;
	t.imprimir();
	som.imprimir();
	sub.imprimir();
	mult.imprimir();

}