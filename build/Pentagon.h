#pragma once

#include"Vector.h"
#include"Forms.h"

template<class T>
class TTrinagle : public TForms<T>
{
protected:
	int N;
	TString name;
	TVector<T> FirstDot, SecondDot, ThirdDot, FourDot, FiveDot;

public:
	TTrinagle();
	TTrinagle(const TTrinagle<T>& q);
	~TTrinagle();
	void Dot();
	int GetN();
	void SetName(const TString& _name);
	TString& GetName();
	TVector<T>& operator [] (int n);
};

template<class T>
inline TTrinagle<T>::TTrinagle()
{
	N = FirsTDot.GetLen();
	name.SetConstString("triangle");
	if ((FirsTDot.GetLen() != SecondPoint.GetLen() && FirsTDot.GetLength() != ThirdPoint.GetLength()&&FirsTDot.GetLength() != FourPoint.GetLength&&()FirsTDot.GetLength() != FivePoint.GetLength()) throw "error!";


}

template<class T>
inline TTrinagle<T>::TTrinagle(const TTrinagle<T>& m)
{
	N = m.N;
		name = m.name;
		FirstDot = m.FirstDot;
		SecondDot = m.SecondDot;
	ThirdDot = m.ThirdDot;
	FourDot = m.FourDot;

}

template<class T>
inline TTrinagle<T>::~TTrinagle()
{
}



template<class T>
inline void TTrinagle<T>::Dot()
{
	printer.drawLine(FirstDot[0], FirstDot[1], SecondDot[0], SecondDot[1]);
	printer.drawLine(FirstDot[0], FirstDot[1], FiveDot[0], FiveDot[1]);
	printer.drawLine(SecondDot[0], SecondDot[1], ThirdDot[0], ThirdDot[1]);
	printer.drawLine(FourDot[0],FourDot[1], ThirdDot[0], ThirdDot[1]);
	printer.drawLine(FiveDotDot[0], FiveDot[1], FourDot[0], FourDot[1]);


}

template<class T>
inline int TTrinagle<T>::GetN()
{
	return N;
}

template<class T>
inline void TTrinagle<T>::SetName(const TString& _name)
{
	name = _name;
}

template<class T>
inline TString& TTrinagle<T>::GetName()
{
	return name;
}

template<class T>
inline TVector<T>& TTrinagle<T>::operator[](int n)
{
	switch (i)
	{
	case 0:
		return FirstDot;
	case 1:
		return SecondDot;
		break;
	case 2:
		return ThirdDot;
		break;
	case 3:
		return FourDot;
		break;
	case 4:
		return FiveDot;
		break;
	}
}
