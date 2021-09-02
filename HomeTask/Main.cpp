#include <iostream>
#include "MyCoffeeMachine.h"
#include "MyCoffeeMachineRecipe.h"

int main()
{
	MyCoffeeMachine firstCoffeeMachine("Barretta", "Model-40", new MyCoffeeMachineRecipe);
	firstCoffeeMachine.RefuelResources(10, 20, 10);
	firstCoffeeMachine.MakeAmericano();
	firstCoffeeMachine.MakeLatte();
	firstCoffeeMachine.MakeAmericano();
	firstCoffeeMachine.MakeAmericano();
	firstCoffeeMachine.MakeLatte();
	firstCoffeeMachine.MakeAmericano();
	firstCoffeeMachine.MakeLatte();
	firstCoffeeMachine.MakeAmericano();
	firstCoffeeMachine.MakeAmericano();
	firstCoffeeMachine.MakeAmericano();
	firstCoffeeMachine.ShowResources();
	firstCoffeeMachine.RefuelResources(10, 20, 20);
	firstCoffeeMachine.ShowResources();
	firstCoffeeMachine.MakeLatte();

	return 0;
}