/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 21:19:01 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/23 21:56:25 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Array.hpp"

#define MAX_VAL	750

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);			//1er tableau de 750
    int* mirror = new int[MAX_VAL];			//2eme tableau de 750
    srand(time(NULL));						//set le time pour rand
    for (int i = 0; i < MAX_VAL; i++){		//parcourir les 2 tableaux et les remplir avec rand
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;}
    {
        Array<int> tmp = numbers;			//faire une deep copie
        Array<int> test(tmp);
    }
    for (int i = 0; i < MAX_VAL; i++){		//check si on a bien fait une deep copie
        if (mirror[i] != numbers[i]){
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;}}
    try {
        numbers[-2] = 0;}					//index invalide
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';}
    try{
        numbers[MAX_VAL] = 0;}				//index invalide
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';}
    delete [] mirror;						//delete tableau 2
    return 0;								//destructeur delete tableau 1
}
