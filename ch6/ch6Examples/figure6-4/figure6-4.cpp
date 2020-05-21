// This program has three functions: main, deep, and deeper.
#include <iostream>

// Prototypes
void deep();
void deeper();

// main
int main()
{
    std::cout << "I am in function main.\n";
    deep();     // call fucntion deep
    std::cout << "Now I am back in function main again." << std::endl;
    return 0;
}

// function deep
void deep()
{
    std::cout << "I am now inside the fucntion deep.\n";
    deeper();   // call function deeper
    std::cout << "Now I am back in deep.\n";
}

// function deeper
void deeper()
{
    std::cout << "I am now inside function deeper.\n";
}
