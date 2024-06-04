/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 10:54:57 by francesco         #+#    #+#             */
/*   Updated: 2024/06/04 08:50:46 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MutantStack.hpp"
# include <list>
# include <vector>

/*int main(void)
{
    MutantStack<int> a;
    for (int i = 0; i < 10; i++)
    {
        a.push(i);
    }
    MutantStack<int>::iterator it = a.begin();
    while (it != a.end())
    {
        std::cout << *it << std::endl;
        it++;
    }
}*/

int main()
{
    std::cout << "======= Constructors Tests =======" << std::endl;
    std::deque<int> mydeque (3,100);          // deque with 3 elements
    std::vector<int> myvector (2,200);        // vector with 2 elements
    std::stack<int> first;                    // empty stack
    std::stack<int> second (mydeque);   
    MutantStack<int>  firstl;
    MutantStack<int>  secondl(mydeque);
    std::stack<int,std::vector<int> > third;
    MutantStack<int, std::vector<int> > thirdl;
    std::stack<int,std::vector<int> > fourth (myvector);
    MutantStack<int, std::vector<int> > fourthl (myvector);
    std::cout << "size of first" << first.size() << std::endl;
    std::cout << firstl.size() << std::endl;
    std::cout << "size of second: " << second.size() << '\n';
    std::cout << secondl.size() << std::endl;
    std::cout << "size of third: " << third.size() << '\n';
    std::cout << thirdl.size() << std::endl;
    std::cout << "size of fourth: " << fourth.size() << '\n';
    std::cout << fourth.size() << std::endl;
    std::cout << "=========== BASIC TESTS ===========" << std::endl;
    MutantStack<int> mstack;
    std::list<int>  list;
    list.push_back(5);
    list.push_back(17);
    mstack.push(5);
    mstack.push(17);
    std::cout << list.back() << std::endl;
    std::cout << *(--mstack.end()) << std::endl;
    list.pop_back();
    mstack.pop();
    std::cout << list.size() << std::endl;
    std::cout << mstack.size() << std::endl;
    list.push_back(3);
    list.push_back(5);
    list.push_back(737);
    list.push_back(0);
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    std::list<int>::iterator    itl = list.begin();
    MutantStack<int>::iterator ite = mstack.end();
    std::list<int>::iterator    itle = list.end();
    --itl;
    ++itl;
    ++it;
    --it;
    while (it != ite && itl != itle)
    {
        std::cout << *it << std::endl;
        std::cout << *itl << std::endl;
        ++itl;
        ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}

/*int main ()
{
    std::deque<int> mydeque (3,100);          // deque with 3 elements
    std::vector<int> myvector (2,200);        // vector with 2 elements

    std::stack<int> first;                    // empty stack
    std::stack<int> second (mydeque);   
    MutantStack<int>  firstl;
    MutantStack<int>  secondl(mydeque);
    std::stack<int,std::vector<int> > third;
    MutantStack<int, std::vector<int> > thirdl;
    std::stack<int,std::vector<int> > fourth (myvector);
    MutantStack<int, std::vector<int> > fourthl (myvector);
    //stack initialized to copy of deque
    std::cout << "size of first" << first.size() << std::endl;
    std::cout << firstl.size() << std::endl;
    std::cout << "size of second: " << second.size() << '\n';
    std::cout << secondl.size() << std::endl;
    std::cout << "size of third: " << third.size() << '\n';
    std::cout << thirdl.size() << std::endl;
    std::cout << "size of fourth: " << fourth.size() << '\n';
    std::cout << fourth.size() << std::endl;
    return 0;
}*/