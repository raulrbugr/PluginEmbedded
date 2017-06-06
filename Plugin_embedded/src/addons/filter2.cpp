/*
 * filter2.cpp
 *
 *  Created on: 6 de jun. de 2017
 *      Author: Raul
 */

#include "filter2.h"


   	Filtro2::Filtro2(){
			name = "Filter2";
			desc = "hola";
		}
	//Implementar esto, aqui se corre el filtro
   void Filtro2::apply () {
		cout<<"filtro2"<<endl;
	};


static Filtro2 f;


