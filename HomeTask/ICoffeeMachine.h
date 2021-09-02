#pragma once

class ICoffeeMachine
{
public:
	ICoffeeMachine() {}
	virtual ~ICoffeeMachine() {}
	virtual void MakeAmericano() = 0;
	virtual void MakeLatte() = 0;
};