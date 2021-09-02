#include "MyCoffeeMachineRecipe.h"

bool MyCoffeeMachineRecipe::SetAmericanoRecipe(uint32_t &water, uint32_t &sugar, uint32_t &milk)
{
	if (water > 1 && sugar > 1 && milk > 1)
	{
		--water;
		--sugar;
		--milk;
		std::cout << "the CoffeeMachine is cooking a cup of americano" << std::endl;
		return true;
	}
	else
	{
		std::cout << "the CoffeeMachine doesn`t has enought resource!!!" << std::endl;
		return false;
	}
}

bool MyCoffeeMachineRecipe::SetLatteRecipe(uint32_t &water, uint32_t &sugar, uint32_t &milk)
{
	if (water > 3 && sugar > 3 && milk > 2)
	{
		water = water - 3;
		sugar = sugar - 3;
		milk = milk - 2;
		std::cout << "the CoffeeMachine is cooking a cup of latte" << std::endl;
	}
	else
	{
		std::cout << "the CoffeeMachine doesn`t has enought resource!!!" << std::endl;
		return false;
	}
}
