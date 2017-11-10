/*
 * HashEntry.cpp
 *
 *  Created on: 2017�~11��10��
 *      Author: ���@
 */

#include "HashEntry.h"

template<typename T>
HashEntry<T>::HashEntry(int k,T v) {
	key = k;
	value = v;
}


template<typename T>
int HashEntry<T>::getKey(){
	return key;
}

template<typename T>
T HashEntry<T>::getValue(){
	return value;
}

template<typename T>
HashEntry<T>::~HashEntry() {

}

