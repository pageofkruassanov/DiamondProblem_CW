#pragma once
#include <iostream>
using namespace std;
class Animal
{
protected:
	string name;
	string type;
public:
	Animal(string name, string type) : name{ name }, type{ type } {};
	virtual void Eat() = 0;
	virtual void Sleep() = 0;
	virtual void Move() = 0;
};

