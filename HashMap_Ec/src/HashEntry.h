/*
 * HashEntry.h
 *
 *  Created on: 2017¦~11¤ë10¤é
 *      Author: ®¶°@
 */

#ifndef HASHENTRY_H_
#define HASHENTRY_H_

template<typename T>
class HashEntry {
private:
	int key;
	T value;

public:

	HashEntry(int k, T v){
		key = k;
		value = v;
	}

	int getKey(){
		return key;
	}

	T getValue(){
		return value;
	}

	virtual ~HashEntry(){

	}

};

#endif /* HASHENTRY_H_ */
