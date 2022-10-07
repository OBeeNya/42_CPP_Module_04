#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	return ;
}

WrongCat::WrongCat(const WrongCat &src)
{
	*this = src;
	return ;
}

WrongCat::~WrongCat(void)
{
	return ;
}

WrongCat	&WrongCat::operator=(const WrongCat &rhs)
{
	return (*this);
}
