/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 11:20:24 by lgiband           #+#    #+#             */
/*   Updated: 2022/09/07 10:31:58 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>

#include "MutantStack.hpp"

int main()
{
	std::cout << "-----------------Testing MutantStack:-----------------" << std::endl;
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::ite it = mstack.begin();
	MutantStack<int>::ite ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "-----------------Testing List:-----------------" << std::endl;

	std::list<int> lst;

	lst.push_back(5);
	lst.push_back(17);
	std::cout << lst.back() << std::endl;
	lst.pop_back();
	std::cout << lst.size() << std::endl;
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	lst.push_back(0);
	std::list<int>::iterator it2 = lst.begin();
	std::list<int>::iterator ite2 = lst.end();
	++it2;
	--it2;
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
	std::cout << "-----------------Other test:-----------------" << std::endl;
	MutantStack<int> mstack2;

	
	mstack2.push(5);
	std::cout << mstack2.top() << std::endl;
	mstack2.pop();
	std::cout << mstack2.size() << std::endl;
	mstack2.push(3);
	mstack2.push(5);
	mstack2.push(7);
	mstack2.push(9);
	mstack2.push(11);
	mstack2.push(13);
	mstack2.push(15);
	mstack2.push(17);
	mstack2.push(19);
	std::cout << mstack2.size() << std::endl;
	MutantStack<int>::ite it3 = mstack2.begin();
	MutantStack<int>::ite ite3 = mstack2.end();
	
	while (it3 != ite3)
	{
		std::cout << *it3 << std::endl;
		++it3;
	}
	return (0);
}
