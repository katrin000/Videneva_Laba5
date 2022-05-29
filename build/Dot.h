#pragma once
#include<iostream>
#include"Vector.h"
#include"Forms.h"


template <class T>
class TDot : public Forms<T>
{
protected:
	TString name;
	TVector<T> Vector;
	int N;
public:
	TDot();
	~TDot();
	TDot(const TDot<T>& _dot);

	
	 TVector<T>& operator [](int n);
	virtual int GetN();
	virtual void SetName(const TString& _name);
	virtual TString& GetName();

};

template<class T>
TDot<T>::TDot()
{
	name.SetConstString("Dot");
	N = Vec.GetLen();
}

template<class T>
inline TDot<T>::~TDot()
{

}

template<class T>
inline TDot<T>::TDot(const TDot<T>& _dot)
{
	name = _dot.name;
	Vector = _dot.Vector;
	N = _dot.N;
}



template<class T>
inline TVector<T>& TDot<T>::operator[](int n)
{
	return Vector;
}

template<class T>
inline int TDot<T>::GetN()
{
	return N;
}

template<class T>
inline void TDot<T>::SetName(const TString& _name)
{
	name = _name;
}

template<class T>
inline TString& TDot<T>::GetName()
{
	return name;
}