#include "stdafx.h"
#include "NumeroFibonacci.h"
#include <iostream>


using namespace std;

   NumeroFibonacci::NumeroFibonacci() {
        terminoAnterior = 0;
		terminoAnteriorAnterior = 0;
		terminoActual = 0;
		numeroVecesActualizado = 0;
		valor = 0;
    }

   long NumeroFibonacci::getValor() {
        return valor;       
    }
    
   void NumeroFibonacci::println(){
	   cout << "valor actual= " << valor << "\n"<< "anterior= " << this->terminoAnterior << "\n" << endl;
    }

     void NumeroFibonacci::siguiente() {
        if (this->numeroVecesActualizado == 0)
            {
                this->terminoAnterior = 0;
                this->terminoAnteriorAnterior = 0;
                this->terminoActual = 1;
            }
            if (this->numeroVecesActualizado == 1)
            {
                this->terminoAnterior = 1;
                this->terminoAnteriorAnterior = 0;
                this->terminoActual = 1;
            }
            if (this->numeroVecesActualizado >= 2)
            {
                this->terminoAnteriorAnterior = this->terminoAnterior;
                this->terminoAnterior = this->terminoActual;
                this->terminoActual = this->terminoAnterior + this->terminoAnteriorAnterior;
            }
            this->valor = this->terminoActual;
            this->numeroVecesActualizado += 1;      
    }
	 void NumeroFibonacci::anterior(){

     if (this->numeroVecesActualizado > 0){
     
     if (this->numeroVecesActualizado == 1){
         this->terminoActual = this->terminoAnterior;
         this->terminoAnterior = 0;
         this->terminoAnteriorAnterior = -1;
        }

     if (this->numeroVecesActualizado >= 2){
         int respaldoTerminoActual = this->terminoActual;
         this->terminoActual = respaldoTerminoActual - this->terminoAnteriorAnterior;
         this->terminoAnterior = this->terminoAnteriorAnterior;
         this->terminoAnteriorAnterior = this->terminoActual - this->terminoAnterior;
        }
         this->valor = this->terminoActual;
         this->numeroVecesActualizado -= 1;
        }
	 
    }

	 void NumeroFibonacci::reiniciar()
        {
            this->terminoAnterior = 0;
            this->terminoAnteriorAnterior = 0;
            this->terminoActual = 0;
            this->numeroVecesActualizado = 0;
            this->valor = 0;
        }