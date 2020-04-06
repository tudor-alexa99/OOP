#pragma once

#include <vector>
#include "TrenchCoat.h"

template <class T>
class Comparator
{
public:
	virtual bool compare(T e1, T e2) = 0;
	virtual ~Comparator() {};
};

class ComparePrice : public Comparator<TrenchCoat>
{
	bool compare(TrenchCoat t1, TrenchCoat t2) override { return t1.getPrice() > t2.getPrice(); }
};

class compareColour : public Comparator<TrenchCoat>
{
	bool compare(TrenchCoat t1, TrenchCoat t2) override { return t1.getColour() > t2.getColour(); }
};
template <class T>
void some_sort(std::vector<T>& v, Comparator<T>& c)
{
	int size = static_cast<int>(v.size());

	for(int i = 0; i<size-1; i++)
		for(int j = i+1; j<size; j++)
			if (c.compare(v[i], v[j]))
			{
				T aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
}