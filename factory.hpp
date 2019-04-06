#pragma once

#include "Food.hpp"

class Factory
{
public:
	virtual Food* select() = 0;
	virtual ~Factory() {}
};

class Factory_Apple : public Factory
{
public:
	Food* select()
	{
		return new Apple();
	}
};

class Factory_Banana : public Factory
{
public:
	Food* select()
	{
		return new Banana();
	}
};

class Factory_Cherry : public Factory
{
public:
	Food* select() 
	{
		return new Cherry();
	}
};