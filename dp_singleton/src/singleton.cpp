/*
 * singleton.cpp
 *
 *  Created on: 23.06.2016
 *      Author: bernat
 */
#include <memory>

using namespace std;

#include "singleton.h"


shared_ptr<singleton> singleton::_instance = nullptr;

shared_ptr<singleton> singleton::get_instance(){

	if(_instance == nullptr) _instance = shared_ptr<singleton>(new singleton());

	return _instance;
}




