#include "factory.hpp"

int main()
{
	Factory* factory = new Factory_Apple;	
	Food* now = factory->select();
	now->display();
}