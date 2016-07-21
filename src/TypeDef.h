/*******************
* author: zhanghang
* date: 2016.07.21
* file: TypeDef.h
*********************/
#ifndef TYPE_DEFINE_H
#define TYPE_DEFINE_H

class BaseNormal
{
public:
	BaseNormal();
	~BaseNormal();
	void Foo();
	void Func();
};

class BaseVirtual
{
public:
	BaseVirtual();
	virtual ~BaseVirtual();
	void Foo();
	virtual void Func();
private:
	int m_A;
};

class DeriveNormal : public BaseNormal
{
public:
	DeriveNormal();
	~DeriveNormal();
	void Foo();
	void Func();
};

class DeriveVirtual : public BaseVirtual
{
public:
	DeriveVirtual();
	virtual ~DeriveVirtual();
	void Foo();
	virtual void Func();
public:
//	static int ms_B;
};

#endif /*TYPE_DEFINE_H*/
