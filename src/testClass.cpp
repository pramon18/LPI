#include "testClass.h"
#include <iostream>


int teste::get_A(){
	return a;
};

int teste::get_B(){
	return b;
};

int teste::get_key(){
	return key;
};

int teste::soma(int _a, int _b){
	return (a+b);
};

int teste::subtracao(int _a, int _b){
	return soma(a,-b);
};

int teste::multiplicacao(int _a, int _b){
	return (a*b);
};

void teste::set_A(int _a){
	a = _a;
};

void teste::set_B(int _b){
	b = _b;
};

void teste::set_key(int _key){
	key = _key;
};

void teste::imprimir(){
	std::cout << "Valor de A = [" << a << "]" << std::endl;
	std::cout << "Valor de B = [" << b << "]" << std::endl;
	std::cout << "Valor de Key = [" << key << "]" << std::endl;
};