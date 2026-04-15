/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <dasimoes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 19:21:09 by dasimoes          #+#    #+#             */
/*   Updated: 2026/04/15 15:30:55 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(int ac, char **av)
{
	(void)av;
	if (ac != 1)
	{
		std::cout	<< "No arguments supported, try again!\n"
					<< "type in ./array"
					<< std::endl;
		return (1);
	}

	std::cout	<< "========= PDF INT TEST ========="
				<< std::endl << std::endl;

	int *a = new int();
	int *b = new int;

	
	std::cout << "int a made with new int(): " << *a << '\n';
	std::cout << "int b made with new int: " << *b << '\n';
	
	delete (a);
	delete (b);

	std::cout << std::endl;

	std::cout	<< "========= EMPTY ARRAY TEST ========="
				<< std::endl << std::endl;

	Array<int> arr;

	std::cout << "Empty array arr size: " << arr.size() << '\n';
	std::cout << "Empty array arr first elem: ";
	try
	{
		arr[0] = 10;
		std::cout << '\n';
	}
	catch (std::exception& e)
	{
		std::cerr << '\n' << e.what() << '\n';
	}
	
	std::cout << std::endl;

	std::cout	<< "========= REGULAR ARRAY TEST ========="
				<< std::endl << std::endl;

	Array<char> arr2(5);

	std::cout << "5 elem array named arr2 size: " << arr2.size() << '\n';
	std::cout << "Atributting elem of position 0 value 'A'" << '\n';
	arr2[0] = 'A';
	std::cout << "Printing element of position 0: " << arr2[0] << '\n';
	
	std::cout << std::endl;

	std::cout	<< "========= CONST REGULAR ARRAY TEST ========="
				<< std::endl << std::endl;

	const Array<float> arr3(10);

	std::cout << "10 elem array named arr3 size: " << arr3.size() << '\n';
	// std::cout << "Atributting elem of position 2 value 10.0f" << '\n';
	// arr3[2] = 10.0f;
	// std::cout << "Printing element of position 2: " << arr3[2] << '\n';
	std::cout << "Printing element of position 0: " << arr3[0] << '\n';
	
	std::cout << std::endl;

	std::cout	<< "========= ARRAY ATTRIBUTION TEST ========="
				<< std::endl << std::endl;

	Array<char> arr4(arr2);

	std::cout << "Array named arr4 created from arr2 size: " << arr4.size() << '\n';
	std::cout << "Printing element of position 0 from arr4: " << arr4[0] << '\n';
	std::cout << "Printing element of position 0 from arr2: " << arr2[0] << '\n';
	std::cout << "Atributting elem of position 0 value 'b' in arr4" << '\n';
	arr4[0] = 'b';
	std::cout << "Printing element of position 0 from arr4: " << arr4[0] << '\n';
	std::cout << "Printing element of position 0 from arr2: " << arr2[0] << '\n';
	
	std::cout << std::endl;

	std::cout	<< "========= OUT OF BOUNDS ACCESS TEST ========="
				<< std::endl << std::endl;

	std::cout << "Try to access element of position 1000 from arr2:\n";

	try
	{
		arr2[1000] = 'Z';
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl;

	std::cout << std::endl;

	return 0;
}
