/*
 * Plugin architecture application.
 *
 * In this project you have a simple plugin architecture for embedded systems based on inheritance
 *
 * You only have to make the filters like the example.
 * The class Plugin add automatically all the addons, you don have to declare nothing in any file.
 *
 * It can be an usefull project to develop a image processing application and you want add some filters.
 *
 */


#include <iostream>
#include <string>
#include "plugin.h"
using namespace std;



int main() {

	int nplug;

	//Call to the static method class
	nplug = Plugin::n_plugins();

	//Example execution
	cout << "Plugins added: " << nplug << endl;
	Plugin::getPlugin("Filter1")->apply();
	Plugin::getPlugin("Filter2")->apply();

   	return 0;
}
