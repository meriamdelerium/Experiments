#include "../include/if_statement.hpp"
/*
An if/else statement is one of the simplest coding statements. It
checks what is inside the parentheses immediately following the if. 
If what is inside evaluates to something other than zero, then whatever
is inside the {} curly brackets is executed. If what is inside the ()
evaluates to zero, then it skips everything contained in the {} and moves 
to the next statement. If there is an else following it, it will do what
is inside the else curly brackets. If it is an else if(), then it treats
it like another if statement. You can chain if, else if, else if, on for 
as many times as you like, and only one will be executed. Usually if you 
have more than 3, you should look at a switch statement. 
*/
if_statement(){
    int option_0;
    int option_1;
    int option_2;

    if(1){
        std::cout << "This statement will always execute\n";
    }

    if(0){
        std::cout << "This statement will never execute\n";
    }

    std::cin >> option_0;
    if(option_0){
        std::cout << "option_0 != 0\n";
    }
    else{
        std::cout << "option_0 == 0\n";
    }

    std::cout << "enter a number for option_1 and option_2: \n";
    std::cin >> option_1;
    std::cin >> option_2;
    if(option_1){
        std::cout << "option_1 != 0\n";
    }
    else if(option_2){
        std::cout << "option_2 != 0\n";
    }
    else{
        std::cout << "option_1 == 0 && option_2 == 0\n";
    }

    return;
}