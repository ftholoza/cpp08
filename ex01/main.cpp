/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:29:25 by francesco         #+#    #+#             */
/*   Updated: 2024/06/03 10:07:12 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main( void )
{
    try
    {
        Span    a(4);
        Span    b(20000);
    
        a.addNumber(3);
        a.addNumber(4);
        a.addNumber(5);
        a.addNumber(6);
        std::cout << "longest span: " <<  a.longestSpan() << std::endl;
        std::cout <<  "shortest span: " << a.shortestSpan() << std::endl;
        for (int i = 0; i < 20000; i++)
        {
            b.addNumber(i);
        }
        std::cout << "0 and 19999" << std::endl;
        std::cout << "longest span: " << b.longestSpan() << std::endl;
        std::cout << "shortest span: " <<  b.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}