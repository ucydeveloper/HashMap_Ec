/*
 * HashMap.h
 *
 *  Created on: 10.Nov.2017
 *      Author: Chin-Yih Ung
 *
 *  Each HashMap only can contain up to 128 HashEntry.
 *  If you give the number of key is more than 128, the program
 *  will directly replace the value at the place where follows
 *  the calculation of key = (TheOut-Of-boundsKey % _TableSize)
 *
 *
 */
#ifndef HASHMAP_H_
#define HASHMAP_H_

#include "HashEntry.h"
#include <stdio.h>


// The Maximum Size of the Hash
const int TABLE_SIZE = 128;

// The rule of giving hash value
#define HASHFUNC()


template<typename T>
class HashMap128{

private:

	HashEntry<T> **_Table;

public:

	HashMap128(){
		_Table = new HashEntry<T>* [TABLE_SIZE];
		for(int i=0; i<TABLE_SIZE; i++)
			_Table[i] = NULL;
	}

	~HashMap128(){
		for(int i=0; i<TABLE_SIZE; i++)
			if(_Table[i]!=NULL)
				delete _Table[i];
		delete [] _Table;
	}




};




#endif /* HASHMAP_H_ */
