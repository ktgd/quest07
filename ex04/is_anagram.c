/*
**
** QWASAR.IO -- is_anagram
**
** @param {char*} param_1
** @param {char*} param_2
**
** @return {int}
**
*/

#include <string.h> // strlen, strcpy
#include <stdlib.h> // malloc
//#include <stdio.h> // printf //    debug

/*char* strsrt(char* s_0)
{
    int i = 0;
    int j = 0;
    int l = strlen(s_0);
    char c;
    char* s_1 = malloc( l * sizeof(char) );
    strcpy(s_1, s_0);

    i = 0;
    while ( i < l )
    {
        j = 0;
        while ( j < l - 1 )
        {
            if ( s_1[ j + 1 ] <= s_1[j] )
            {
                c = s_1[j];
                s_1[j] = s_1[ j + 1 ];
                s_1[ j + 1 ] = c;
            }
            j++;
        }
        i++;
    }
    return s_1;
}*/

/*int is_anagram(char* param_1, char* param_2)
{
    int t = 0;
    int l_1 = strlen(param_1);
    int l_2 = strlen(param_2);
    int k;
    int j;
    int i;

    if ( l_2 != l_1 )
        return t;
    i = 0;
    k = 0;
    while (param_2[k] != '\0')  //( *++param_2 )
    {
        j = 0;
        while (param_1[j] != '\0')  //( *++param_1 )
        {
            if (param_2[k] == param_1[j]) //&param_2 == &param_1 )
                i++;
            j++;
        }
        k++;
    }
    if ( i == l_1 )
        t += 1;
    return t;
}*/ // may fail, if a string twice has a same character twice. Should I retry with a STR*SRT function, or should I use some engram?
/*int is_anagram(char* param_1, char* param_2)
{
    int i;
    int j;
    int k;
    int l_1 = strlen(param_1);
    int l_2 = strlen(param_2);
    char* s_1;
    char* s_2;
    int t = 0;

    if ( l_2 != l_1 )
        return t;
    s_1 = malloc( l_1 * sizeof(char) );
    strcpy(s_1, param_1);
    s_1 = strsrt(param_1);    
    s_2 = malloc( l_2 * sizeof(char) );
    strcpy(s_2, param_2);
    s_2 = strsrt(param_2);
    i = 0;
    k = 0;
    while (s_2[k] != '\0') //while ( *++s_2 )
    {
        j = 0;
        while (s_1[j] != '\0') //while ( *++s_1 )
        {
            if (s_2[k] == s_1[j]) //if ( &param_2 == &param_1 )
                i++;
            j++;
        }
        k++;
    }
    if ( i == l_1 )
        t += 1;
    return t;
}*/ // obviously will not work any better.
int is_anagram(char* param_1, char* param_2)
{
    int a[ 126 - 32 ] = { 0 };
    int b[ 126 - 32 ] = { 0 };
    int c; //= 0;
    int t = 1;

    c = 0;
    while ( param_1[c] != '\0' )
    {
        a[ param_1[c] - 32 ]++;
        c++;
    }
    c = 0;
    while ( param_2[c] != '\0' )
    {
        b[ param_2[c] - 32 ]++;
        c++;
    }
    c = 0;
    while ( c < 126 - 32 )
    {
        if ( b[c] != a[c] )
            t = 0;
        c++;
    }
    return t;
}

/*int main()
{
    char* s_1_0 = "abcdef";
    char* s_2_0 = "fabcde";
    char* s_1_1 = "ad";
    char* s_2_1 = "bc";
    char* s_1_2 = "";
    char* s_2_2 = "";
    char* s_1_3 = ".123?.";
    char* s_2_3 = "?321..";

    printf("%i\n", is_anagram( s_1_0, s_2_0 ));
    printf("%i\n", is_anagram( s_1_1, s_2_1 ));
    printf("%i\n", is_anagram( s_1_2, s_2_2 ));
    printf("%i\n", is_anagram( s_1_3, s_2_3 ));
    //printf("%i\n", is_anagram( s_1, s_2 ));
    return 0;
}*/ //    debug
