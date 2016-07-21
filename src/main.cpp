#include "TypeDef.h"
#include <iostream>

int main(int argc, char **argv)
{
	DeriveNormal *pDN = NULL;
	pDN = new DeriveNormal();

	pDN->Foo();
	pDN->Func();

	delete pDN;

	std::cout << "************************************" << std::endl;
	std::cout << "sizeof DeriveVirtual: " << sizeof(DeriveVirtual) << std::endl;

	DeriveVirtual *pDV = NULL;
	pDV = new DeriveVirtual();
	
	pDV->Foo();
	pDV->Func();

	delete pDV;

	std::cout << "*************************************" << std::endl;

	int a[2] = {0};
	int i = 0;
	a[i++] = 1;
	std::cout << "a[0]=" << a[0] << " a[1]=" << a[1] << " i=" << i << std::endl;

	return 0;
}
