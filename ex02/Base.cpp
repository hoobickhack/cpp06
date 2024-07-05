/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 20:05:33 by isouaidi          #+#    #+#             */
/*   Updated: 2024/07/05 20:23:27 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "Abc.hpp"

#include <cstdlib>
#include <ctime>

Base::~Base(){};

Base* generate(void){
	srand(time(0));
	int randNum = rand() % 3;
	
	switch(randNum){
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
		default:
			return(NULL);
	}
	
}


void identify(Base* p){
	
}