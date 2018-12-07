#include "../include/switch_case.hpp"
/*
A switch statement is like a long series of if statements - but instead
of writing all the if elses which can be really long, you instead 'switch'
on the variable of choice - here it's int option, which is taken from the 
user. At each case, it looks at option and the case, and compares them. If
they are equal, it executes until the next break, then breaks out. If none 
the cases match, it goes to default, which is usually an error behavior. 
*/
switch_case(){
    int option;

    std::cout << "Enter a number from 0-2: \n";
    std::cin >> option;
    switch(option){
        case 0:
            std::cout << "you entered a zero\n";
        break;

        case 1:
            std::cout << "you entered a one\n";
        break;

        default:
            std::cout << "you entered a 2 or something else\n";
        break;
    }

    return;
}