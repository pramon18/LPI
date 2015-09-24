#ifndef _TESTCLASS_H
#define _TESTCLASS_H


class teste{
	int a,b;
	int key;

	public:
		/*Gets e Sets*/
		int get_A(void);
		int get_B(void);
		int get_key(void);
		int soma(int _a, int _b);
		int subtracao(int _a, int _b);
		int multiplicacao(int _a, int _b);

		void set_A(int _a);
		void set_B(int _b);
		void set_key(int _key);
		void imprimir(void);
};


#endif