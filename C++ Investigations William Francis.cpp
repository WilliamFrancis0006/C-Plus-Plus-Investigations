/*

William Franics
12/14/19
Gourd CSC 330 
C++ Investigations

*/



#include <iostream>
#include <array>
using namespace std;

void Arrays(int Array[], int ArraySize); // prototype


/*

C++ Investigation #1: Goto

Can the goto statement be utilized in C++? If so, what do you go to? Show coded examples and output.


ANSWER:

Yes it can! The goto statement goes to a label. The coded example is show in "Goto()" below.

*/

void Goto()
{
    cout << "C++ Investigation #1" << endl;
    cout << endl;
    int a = 0;
    
    // This is a recursive function to make "a" greater than 3.
    label1:                 
        cout << a << endl;
        a++;
        if (a <= 3) 
        {
            goto label1;     // goes back to "label1"
        }
        else 
        {
            goto label2;     // goes forward to "label2"
        }
            
    label2:
        cout << a << endl;
        cout << endl;
        
        
}



/*

C++ Investigation #2: Blocks

Can separate blocks be specified in C++, and if so, how is variable scoping handled? Show coded examples and output.


ANSWER:

Yes it can! This is handled by only allowing the variable to be accessable in the same block or in a nested block from the same block. If there is a new block the variable is not accessible. The coded example is show in "Block()" below.

*/




void Block()
{
    cout << "C++ Investigation #2" << endl;
    cout << endl;
    int a = 0;
    {
        a = 2000;           // "a" is defined in this block as 2,000
        cout << a << endl;
    }
    {
        a = 1;              // "a" has to be redefined in the new block
        cout << a << endl;  
        {
            a++;            // Nested blocks inside of a block that "a" has been defined in does not have to be redefined 
            cout << a << endl;
            {
                a++;        
                cout << a << endl;
                
            }
            cout << a << endl;
            
        }
        cout << a << endl;
        
    }
    {
        cout << a << endl;  // "a" has to be redefined in the new block
    }
    cout << endl;
}
    
        


/*

C++ Investigation #3: |A|r|r|a|y|s|

Typically, arrays are passed by reference in programming languages since they can be arbitrarily long and copying each element may take time and space. How are arrays passed to functions in C++? If by reference, is there a way to pass them by value? If so, how? Show coded examples and output.


ANSWER:

Arrays are passed to functions by reference. Yes! there is a way to pass them by value. You do this by using containers. We can use the "std::array" container. This is shown in the code below.


*/




void Arrays(const std::array<int, 5> &Will)                 // prints the array
{
    cout << "C++ Investigation #3" << endl;
    cout << endl;
    for (int j = 0; j < Will.size(); j++ )
    {
        cout << "Will[" << j << "] = " << Will[j] << endl;
    }
}



int main()
{
    // C++ Investigation #1
    Goto();
    
    // C++ Investigation #2
    Block();
    
    // C++ Investigation #3 
    std::array<int, 5> Will = {1, 2, 3, 4, 5};   // declaring/initializing array (You must know the length of the array)
    
    Arrays(Will);                                // passes the array "Will" by value with std::array container


    return 0;
}



