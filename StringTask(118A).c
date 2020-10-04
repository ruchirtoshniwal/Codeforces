#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char c[100],sen[200];
    scanf("%s",&c);
    for(int i=0;i<strlen(c);i++) {
        if(c[i]>=65&&c[i]<=90)
        {
            c[i]=97+c[i]-65;
        }
        if((c[i] != 'a') && (c[i] != 'e') && (c[i] != 'i') && (c[i] != 'o') && (c[i] != 'u') && (c[i] != 'y') ) {
            printf(".%c",c[i]);
        }
        
    }
}
