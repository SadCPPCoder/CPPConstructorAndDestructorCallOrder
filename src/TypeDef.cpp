/*******************
* author: zhanghang
* date: 2016.07.21
* file: TypeDef.h
*********************/

#include "TypeDef.h"
#include <iostream>

BaseNormal::BaseNormal()
{
	std::cout << "BaseNormal()" << std::endl;
}

BaseNormal::~BaseNormal()
{
	std::cout << "~BaseNormal()" << std::endl;
}

void BaseNormal::Foo()
{
	std::cout << "BaseNormal::Foo()" << std::endl;
}

void BaseNormal::Func()
{
	std::cout << "BaseNormal::Func()" << std::endl;
}

BaseVirtual::BaseVirtual()
{
	std::cout << "BaseVirtual()" << std::endl;
}

BaseVirtual::~BaseVirtual()
{
	std::cout << "~BaseVirtual()" << std::endl;
}

void BaseVirtual::Foo()
{
	std::cout << "BaseVirtual::Foo()" << std::endl;
}

void BaseVirtual::Func()
{
	std::cout << "BaseVirtual::Func()" << std::endl;
}

DeriveNormal::DeriveNormal()
{
	std::cout << "DeriveNormal()" << std::endl;
}

DeriveNormal::~DeriveNormal()
{
	std::cout << "~DeriveNormal()" << std::endl;
}

void DeriveNormal::Foo()
{
	std::cout << "DeriveNormal::Foo()" << std::endl;
}

void DeriveNormal::Func()
{
	std::cout << "DeriveNormal::Func()" << std::endl;
}

//int DeriveVirtual::ms_B = 1;

DeriveVirtual::DeriveVirtual()
{
	std::cout << "DeriveVirtual()" << std::endl;
}

DeriveVirtual::~DeriveVirtual()
{
	std::cout << "~DeriveVirtual()" << std::endl;
}

void DeriveVirtual::Foo()
{
	std::cout << "DeriveVirtual::Foo()" << std::endl;
}

void DeriveVirtual::Func()
{
	std::cout << "DeriveVirtual::Func()" << std::endl;
}
