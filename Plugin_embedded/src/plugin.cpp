/*
 * plugin.cpp
 *
 *  Created on: 2 de jun. de 2017
 *      Author: Raul
 */
#include "plugin.h"

//Initialize the plugins' number
int Plugin::n=0;

//Initialize the object, to create one instance
Plugin * Plugin::plugins[MAX_PLUGINS];

		//Constructor
		Plugin::Plugin(){

			plugins[n]=this;
			n++;

		}


   		string Plugin::getName(){
			return name;
		}

		string Plugin::getDesc(){
			return desc;
		}


		int  Plugin::n_plugins(){

			return n;

		}


		//Return the pointer to the called plugin, to make something
		Plugin* Plugin::getPlugin(string name){
			bool encontrado =false;
			Plugin *p=0;

			for(int i=0; i< n && !encontrado; i++){
				if(plugins[i]->getName() ==name){
					p=plugins[i];
					encontrado=true;
				}
			}
			return p;
		}




