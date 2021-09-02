#pragma once
#include <string>
#include "ICoffeeMachine.h"
#include "MyCoffeeMachineRecipe.h"

class MyCoffeeMachine : public ICoffeeMachine
{
public:
	MyCoffeeMachine(std::string brand, std::string model, MyCoffeeMachineRecipe *recipe);
	virtual ~MyCoffeeMachine();
	void RefuelResources(uint32_t sugar, uint32_t water, uint32_t milk);
	void ShowResources();
	void MakeAmericano() override;
	void MakeLatte() override;

private:
	std::string m_brand;
	std::string m_model;
	uint32_t m_sugar;
	uint32_t m_water;
	uint32_t m_milk;
	MyCoffeeMachineRecipe *m_recipe = nullptr;
};