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
	HashEntry(int k, T v);
	int getKey();
	T getValue();
	virtual ~HashEntry();

};

#endif /* HASHENTRY_H_ */
