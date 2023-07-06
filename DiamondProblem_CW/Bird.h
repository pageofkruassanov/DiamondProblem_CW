#pragma once
#include "Animal.h"
class Bird : public Animal
{
public:
	Bird(string name, string type) : Animal{ name , type } {};
	void Eat() override;
	void Sleep() override;
	void Move() override;
	virtual void Fly();
	virtual void Sound();
};

