#pragma once
#include "Animal.h"
class Mammal : public Animal
{
public:
	Mammal(string name, string type) : Animal{ name, type } {};
	void Eat() override;
	void Sleep() override;
	void Move() override;
	virtual void Sound();
};

