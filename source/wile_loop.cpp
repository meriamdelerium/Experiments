#include "../include/while_loop.hpp"

/*

A while loop is like a for loop, but is used to just go until
what is in the parentheses evaluates to zero. The difference is
a little nuanced, and up to the implementation which you feel 
would be better. 

This example will be a little more complicated, since we're
gonna start nesting statements. Just follow line by line, 
and you'll get it!

*/

while_loop(){
    int go = 1;
    int count = 0;

    //this loop checks 'go' on each cycle - if go is not zero, it evaluates 
    //again. Each loop, it does what is inside of the curly brackets. Eventually, 
    //go is set to zero by the if statement, and on the next check, the while loop breaks.
    while(go){
        std::cout << "We're still going!\n";
        ++count;
        if(count >= 6){
            go = 0;
        }
    }

    return;

}