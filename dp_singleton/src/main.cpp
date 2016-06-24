/*
 * main.cpp
 *
 *  Created on: 23.06.2016
 *      Author: bernat
 */

#include <iostream>
#include <memory>

using namespace std;



#include "singleton.h"


typedef shared_ptr<singleton> ptr;

int main(int argv, char** args){
	cout << "works again!" << endl;
	ptr s = singleton::get_instance();
	s->set_value(100);
	cout << s->get_value() << endl;
	ptr ss = singleton::get_instance();
	ss->set_value(200);
	cout << s->get_value() << endl;
	cout << ss->get_value() << endl;
	//shared_ptr<singleton> sss (new singleton()); error - constructor is private

}


