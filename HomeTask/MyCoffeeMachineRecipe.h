#pragma once
#include <iostream>
#include "ICoffeeMachineRecipe.h"
class MyCoffeeMachineRecipe : public ICoffeeMachineRecipe
{
public:
	bool SetAmericanoRecipe(uint32_t &water, uint32_t &sugar, uint32_t &milk) override;
	bool SetLatteRecipe(uint32_t &water, uint32_t &sugar, uint32_t &milk) override;

private:
};