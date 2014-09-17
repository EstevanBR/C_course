//
//  strings.c
//  
//
//  Created by Estevan Hernandez on 5/8/14.
//
//

#include <stdio.h>
#define BLURB "Authentic imitation!"
int main(void)
{
    printf("\n\n/%2s/\n", BLURB);
    printf("/%24s/\n", BLURB);
    printf("/%24.5s/\n", BLURB);
    printf("/%-24.5s/\n\n\n", BLURB);
    
    return 0;
}

/*

%-24.5s
- = left aligned
24 = space occupied
.5 = 5 characters printed
s = string

*/