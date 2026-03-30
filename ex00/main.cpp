/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <dasimoes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 19:21:09 by dasimoes          #+#    #+#             */
/*   Updated: 2026/03/30 12:39:41 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main(int ac, char **av)
{
	(void)av;
	if (ac != 1)
	{
		std::cout	<< "No arguments supported, try again!\n"
					<< "type in ./templates"
					<< std::endl;
		return (1);
	}

	std::cout	<< "========= MY TEST ========="
				<< std::endl << std::endl;
	float	float1 = 10.0f;
	float	float2 = -50.0f;
	
	float*	test1 = &float1;
	float*	test2 = &float2;
	
	std::cout << "test1: " << *test1 << std::endl;
	std::cout << "test2: " << *test2 << std::endl;

	std::cout << "SWAP OPERATION"  << std::endl;

	::swap(*test1, *test2);

	std::cout << "test1: " << *test1 << std::endl;
	std::cout << "test2: " << *test2 << std::endl;
	
	std::cout << "MIN OPERATION"  << std::endl;
	std::cout << "min: " << ::min(*test1, *test2)  << std::endl;

	std::cout << "MAX OPERATION"  << std::endl;
	std::cout << "max: " << ::max(*test1, *test2)  << std::endl;
	
	std::cout << std::endl;

	std::cout	<< "========= PDF TEST ========="
				<< std::endl << std::endl;

	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	
	std::cout << std::endl;
	return 0;
}
