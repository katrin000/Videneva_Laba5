#pragma once
#include"Forms.h"
#include"Dot.h"
#include"Vector.h"
#include "Line.h"
#include"Triangle.h"
#include"Pentagon.h"
template<class T>
class TPen
{
public:
	int count;
	TForms<T>** data;
	TPen();
	~TPen();
	int GetCount();
};

template<class T>
inline TPen<T>::TPen()
{
	data = 0;
	count = 0;
}

template<class T>
inline TPen<T>::~TPen()
{
	delete[] data;
	data = 0;
}

template<class T>
inline int TPen<T>::GetCount()
{
	return cout;
}
