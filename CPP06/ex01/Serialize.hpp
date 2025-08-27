/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 13:28:03 by fbordes           #+#    #+#             */
/*   Updated: 2024/04/26 13:28:04 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

#include <iostream>
#include <stdint.h>

struct Data
{
	int id;
};

class   Serialize
{
	 public:
		static uintptr_t serialize(Data *ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif