#include "MyCoffeeMachine.h"
#include "ICoffeeMachineRecipe.h"

MyCoffeeMachine::MyCoffeeMachine(std::string brand, std::string model, MyCoffeeMachineRecipe *recipe)
	: m_brand(brand), m_model(model), m_water(0), m_sugar(0), m_milk(0), m_recipe(recipe)
{
}

MyCoffeeMachine::~MyCoffeeMachine()
{
	delete m_recipe;
}

void MyCoffeeMachine::RefuelResources(uint32_t sugar, uint32_t water, uint32_t milk)
{
	m_sugar += sugar;
	m_water += water;
	m_milk += milk;
}

void MyCoffeeMachine::ShowResources()
{
	std::cout << "Water	- " << m_water << std::endl;
	std::cout << "Sugar	- " << m_sugar << std::endl;
	std::cout << "Milk	- " << m_milk << std::endl;
}

void MyCoffeeMachine::MakeAmericano()
{
	m_recipe->SetAmericanoRecipe(m_water, m_sugar, m_milk);
}

void MyCoffeeMachine::MakeLatte()
{
	m_recipe->SetLatteRecipe(m_water, m_sugar, m_milk);
}
