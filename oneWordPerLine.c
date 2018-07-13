// C Programming
//
// Program that prints its input one word per line.
//
//  Exercise_1-12
//
//  Created by Louie Shi on 6/29/18.
//  Copyright © 2018 Louie Shi. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    char c;
    char prevChar = ' ';
    
    while( (c = getchar()) != EOF)
    {
        if( (c == ' ') || (c == '\t') || (c == '\n'))
        {
            if(prevChar != ' ')
            {
                putchar('\n');
            }
            prevChar = ' ';
        }
        else
        {
            putchar(c);
            prevChar = c;
        }
    }
    
    return 0;
}
