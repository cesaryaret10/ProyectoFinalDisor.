
#ifndef NUMEROFIBONACCI_H
#define NUMEROFIBONACCI_H

class NumeroFibonacci{

private:
	// Atributos de la clase
    long terminoAnterior;
    long terminoAnteriorAnterior;
    long terminoActual;
	long numeroVecesActualizado;
	long valor;

public: 
	// Metodos de la clase
	NumeroFibonacci();
	long getValor();
	void println();
	void siguiente();
	void anterior();
	void reiniciar();
};
    
#endif




