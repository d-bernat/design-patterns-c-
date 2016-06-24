/*
 * singleton.h
 *
 *  Created on: 23.06.2016
 *      Author: bernat
 */

#ifndef SINGLETON_H_
#define SINGLETON_H_

#include<memory>

using namespace std;

class singleton {
private:
	singleton(): _value(0) {
		// TODO Auto-generated constructor stub
	}
	static shared_ptr<singleton> _instance;
	int _value;
public:
	virtual ~singleton(){
		// TODO Auto-generated destructor stub
	}
	static shared_ptr<singleton> get_instance();
	inline int get_value(){ return _value;}
	inline void set_value(int value){ _value = value;}


};

#endif /* SINGLETON_H_ */
