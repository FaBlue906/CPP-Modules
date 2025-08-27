/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:43:25 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/09 15:58:00 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; ++i)
		materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	for (int i = 0; i < 4; ++i)
		materias[i] = src.materias[i] ? src.materias[i]->clone() : NULL;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; ++i)
		{
			delete materias[i];
			materias[i] = rhs.materias[i] ? rhs.materias[i]->clone() : NULL;
		}
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i)
		delete materias[i];
}

void	MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; ++i)
	{
		if (!materias[i])
		{
			materias[i] = m->clone();
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; ++i)
	{
		if (materias[i] && materias[i]->getType() == type)
			return materias[i]->clone();
	}
	return NULL;
}
