/*
**
** QWASAR.IO -- my_union
**
** @param {char*} param_1
** @param {char*} param_2
**
** @return {char*}
**
*/

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int isin(char c, char* s)
{
    int i = 0;
    int l = strlen(s);

    while ( i < l )
    {
        if (c == s[i])
            return 1;
        i++;
    }
    return 0;
}

char* my_union(char* param_1, char* param_2)
{
    int i;
    int j;
    int k;
    size_t l_2 = strlen(param_2);
    size_t l_1 = strlen(param_1);
    size_t l_3;
    char* s;

    if ( l_1 < l_2 )
        l_3 = l_2;
    else
        l_3 = l_1;
    s = malloc( ( l_3 + 1 ) * sizeof(char) );
    k = 0;
    j = 0;
    i = 0;
    while ( i < l_1 )
    {
        if ( !isin(param_1[i], s) )
        {
            s[k] = param_1[i];
            k += 1;
        }
        i++;
    }
    while ( j < l_2 )
    {
        if ( !isin(param_2[j], s) )
        {
            //printf("caca\n");
            s[k] = param_2[j];
            k += 1;
        }
        j++;
    }
    return s;
}

/*int main()
{
    char* s_0_1 = malloc( ( 9 + 1 ) * sizeof(char) );
    s_0_1 = "zpadinton"; //char s_0_1[9] = "zpadinton";
    char* s_0_2 = malloc( ( 31 + 1 ) * sizeof(char) );
    s_0_2 = "paqefwtdjetyiytjneytjoeyjnejeyj"; //char s_0_2[31] = "paqefwtdjetyiytjneytjoeyjnejeyj";
    char* s_1_1 = malloc( ( 11 + 1 ) * sizeof(char) );
    s_1_1 = "ddf6vewg64f"; //char s_1_1[11] = "ddf6vewg64f";
    char* s_1_2 = malloc( ( 31 + 1 ) * sizeof(char) );
    s_1_2 = "gtwthgdwthdwfteewhrtag6h4ffdhsd"; //char s_1_2[31] = "gtwthgdwthdwfteewhrtag6h4ffdhsd";
    char* s_2_1 = malloc( ( 4 + 1 ) * sizeof(char) );
    s_2_1 = "rien"; //char s_2_1[4] = "rien";
    char* s_2_2 = malloc( ( 26 + 1 ) * sizeof(char) );
    s_2_2 = "cette phrase ne cache rien"; //char s_2_2[26] = "cette phrase ne cache rien";

    printf("%s\n", my_union(s_0_1, s_0_2));
    printf("%s\n", my_union(s_1_1, s_1_2));
    printf("%s\n", my_union(s_2_1, s_2_2));
    return 0;
}*/
