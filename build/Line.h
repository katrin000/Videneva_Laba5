#pragma once
#include"Vector.h"
#include"Forms.h"
#include "String.h"


template<class T>
class TLine : public TForms<T>
{
protected:
  int N;
  TVector<T> FirstDot;
  TVector<T>SecondDot;
public:
  TLine();
  ~TLine();
  T GetN();
  T& operator[](int n);
  TString name;
  void SetName(const TString& _name);
  TString& GetName();
  TLine(const TLine<T>& _line);
  void Dot();
  

};

template<class T>
inline TLine<T>::TLine()
{
  N = FirsTDot.GetLen();
  name.SetConstString("line");
  if ((FirsTDot.GetLength() != SecondPoint.GetLength()) throw "error!";
   
   
}

template<class T>
inline TLine<T>::~TLine()
{
}

template<class T>
inline T TLine<T>::GetN()
{
  return 0;
}

template<class T>
inline T& TLine<T>::operator[](int n)
{
  switch (n)
  {
  case 0:
    return FirsTDot;
  case 1:
    return SecondPoint;
    break;

  default:
    throw "ошибка";
  }
}

template<class T>
inline void TLine<T>::SetName(const TString& _name)
{
  name = _name;
}

template<class T>
inline TString& TLine<T>::GetName()
{
  return name;
 
}

template<class T>
inline TLine<T>::TLine(const TLine<T>& _line)
{
  FirstDot = _line.FirstDot;
  SecondDot = _line.SecondDot;
  N= _line.N;
  name = _line.name;
}

template<class T>
inline void TLine<T>::Dot()
{
  return FirstDot[1];
}
