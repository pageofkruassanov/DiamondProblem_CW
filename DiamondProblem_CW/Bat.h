#pragma once
#include "Bird.h"
#include "Mammal.h"
class Bat : virtual public Bird, virtual public Mammal
{
public:
	Bat(string name, string type) : Bird(name, type), Mammal(name, type) {};
	void Eat() override;
	void Sleep() override;
	void Move() override;
	void Fly() override;
	void Sound() override;
};

