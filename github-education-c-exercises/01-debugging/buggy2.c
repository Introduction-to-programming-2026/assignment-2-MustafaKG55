// Missing cs50.h, variable's type, semicolon, %s, and second printf argument.
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("What's your name? ");
    printf("hello, %s\n", name);
    return 0;
}
