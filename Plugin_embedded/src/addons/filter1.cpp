/*
 * filter1.cpp
 *
 *  Created on: 6 de jun. de 2017
 *      Author: Raul
 */

#include "filter1.h"



   	Filtro1::Filtro1(){
			name = "Filter1";
			desc = "hola";
		}

   void Filtro1::apply () {
		cout<<"filtro1"<<endl;
	};

//to create the object, and this is automatically added to the plugin class
static Filtro1 f;

/*
 * If you want to make HW functions, you have to create this but outsithe from the class,
 * and then you can call this function from apply function.
 *
 *
 * Example:
 *
 *	void HardwareFunction(){         NOT-------> void Filtro1::HardwareFunction(), and not declaration in .h file
 *
 *	}
 *
 */

