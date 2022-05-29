#pragma once
#include"String.h"
#include "Vector.h"
template<class T>
	class TForms
	{
	protected:
		int _N;
	public:
		Forms( int _N=0);
		virtual void Plot() = 0;
		T GetN();
		void SetName(const TString& _name);
		TString& GetName();
		T& operator[](int n);
		~Forms();
		void Dot();
		

};