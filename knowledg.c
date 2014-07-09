//
//  knowledg.c
//  
//
//  Created by Estevan Hernandez on 5/6/14.
//
//

#include <stdio.h>
int main(void)
{
    
    
    //Format specifier      Characters matched                          Argument type
    //%c                    any single character                        char
    //%d,%i                 integer                                     integer type
    //%u                    integer                                     unsigned
    //%o                    octal integer                               unsigned
    //%x,%X                 hex integer                                 unsigned
    //%e,%E,%f,%g,%G        floating point number                       floating type
    //%p                    address format	void *
    //%s                    any sequence of non-whitespace characters   char
    
    int input, repeat;
    
    printf("\nFormat specifier\tCharacters matched\t\t\t\tArgument type\n\n%%c\t\t\tany single character\t\t\t\tchar\n%%d,%%i\t\t\tinteger\t\t\t\t\t\tinteger type\n%%u\t\t\tinteger\t\t\t\t\t\tunsigned\n%%o\t\t\toctal integer\t\t\t\t\tunsigned\n%%x,%%X\t\t\thex integer\t\t\t\t\tunsigned\n%%e,%%E,%%f,%%g,%%G\t\tfloating point number\t\t\t\tfloating type\n%%p\t\t\taddress format\t\t\t\t\tvoid*\n%%s\t\t\tany sequence of non-whitespace characters\tchar\n\n");
    
    
    for(repeat = 1; repeat > 0; repeat++)
    {
        printf("please input a number 0-255\n");
        scanf("%d", &input);
        printf("\n%c\n", input);
        getchar();
    }

    return 0;

}