#include "../include/for_loop.hpp"

/*
For loops are for looping a certain number of times. The number
of times it loops is up to you, but can derive that number from 
the code leading up to it. I'll show a couple here to illustrate 
how the loop is set up - it's always set up the same way. 

for(int i = 0; i < 10; ++i){
    
    int i = 0; declares what variable you will be looping over
    and what number it starts at. You don't have to declare it 
    there; you can use one you've been using for something else. 

    i < 10; declares how long you'll be counting for. In this case 
    it will count from 0-9, since 9 < 10. 

    ++i; declares how to count - in this case we're counting by ones. 
    i += 1; and ++i; and i++; all do more or less the same thing, just 
    add 1 to i. 

    So this for loop will start at 0, do everything inside it's curly
    brackets, then start over at the top - it will add one to i, then if
    i < 10 is still true, it will do it all again. As soon as i is >= 10, 
    it will break out and not do the loop that time, and continue to any 
    code that follows. So here, as soon as i == 10, it breaks and goes to 
    the following code. 
}
*/

for_loop(){
    //This is the above for loop demonstrated. 
    for(int i = 0; i < 10; ++i){
        std::cout << "count is equal to: " << i << "\n";
    }
    std::cout << "first for loop finished, count = " << i << "\n";

    //This for loop will count by 2's
    for(int i = 0; i < 10; i += 2;){
        std::cout << "count is equal to: " << i << "\n";
    }

    //This one starts at 26, then counts backwards by 4s until it becomes 5 or less
    int counter = 26;
    for(counter; counter > 5; counter -= 4){
        std::cout << "count is equal to: " << counter << "\n";
    }
    std::cout << "final count is: " << counter << "\n";

    return;
}