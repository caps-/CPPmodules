#include "ClapTrap.hpp"

/* Constructors and Destructor */
ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
};

ClapTrap::ClapTrap(std::string name)
	:	_name(name),
		_HP(10),
		_EP(10),
		_AD(3)
{
	std::cout << name << "'s constructor called" << std::endl;
};

ClapTrap::~ClapTrap()
{
	std::cout << this->_name << "'s destructor called" << std::endl;
}

//ATTACK
void	ClapTrap::attack(const std::string &target)
{
	if (this->_EP == 0)
	{
		std::cout << this->_name << "has 0 Energy Points and can't attack!"
			<< std::endl;
	}
	else
	{
		this->_EP -= 1;
		std::cout << this->_name << " attacks " << target << " with "
			<< this->_AD << " points of attack damage!" << std::endl;
		std::cout << this->_name << " has " << this->_EP << " EP left."
			<< std::endl;
		std::cout << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_HP -= amount;
	std::cout << this->_name << " takes " << amount << " damage!" << std::endl;
	std::cout << this->_name << " has " << this->_HP << " HP left." << std::endl;
	std::cout << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_EP == 0)
	{
		std::cout << this->_name << " has 0 Energy Points and can't repair!"
			<< std::endl;
	}
	else
	{
		this->_EP -= 1;
		this->_HP += amount;
		std::cout << this->_name << "has repaired themselves with " << amount
			<< " HP, giving them " << this->_HP << " total HP!" << std::endl;
	}
}
