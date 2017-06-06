/*
 * filter2.h
 *
 *  Created on: 6 de jun. de 2017
 *      Author: Raul
 */

#ifndef SRC_ADDONS_FILTER2_H_
#define SRC_ADDONS_FILTER2_H_

#include "../plugin.h"

class Filtro2 : public Plugin {
  	public:
   		Filtro2();
	//Implementar esto, aqui se corre el filtro
	void apply ();
};



#endif /* SRC_ADDONS_FILTER2_H_ */
