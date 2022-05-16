/*
**
** QWASAR.IO -- inter
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

int cisins(int c, char* s)
{
    size_t l = strlen(s);
    size_t i = 0;

    while ( i < l )
    {
        if (c == s[i])
            return 1;
        i++;
    }
    return 0;
}

char* inter(char* param_1, char* param_2)
{
    char* s;
    int l_3;
    int l_2;
    int l_1;
    int k;
    int j;
    int i;

    l_2 = strlen(param_2);
    l_1 = strlen(param_1);
    if ( l_1 < l_2 )
        l_3 += l_2;
    else
        l_3 += l_1;
    s = malloc( ( l_3 + 1 ) * sizeof(char) );
    k = 0;
    i = 0;
    while (param_1[i] != '\0')
    {
        j = 0;
        while (param_2[j] != '\0')
        {
            if ( !cisins(param_1[i], s) && cisins(param_1[i], param_2) )
            {
//printf("%c\t%i\n%c\t%i\n", param_1[i], i, param_2[j], j);
                s[k] = param_1[i];
                k++;
            }
            j++;
        }
        i++;
    }
    return s;
}

/*int main()
{
    char* s_0_1 = "padinton";
    char* s_0_2 = "paqefwtdjetyiytjneytjoeyjnejeyj";
    char* s_1_1 = "ddf6vewg64f";
    char* s_1_2 = "gtwthgdwthdwfteewhrtag6h4ffdhsd";
    char* s_2_1 = "nothing";
    char* s_2_2 = "This sentence hides nothing";

    printf("%s\n", inter(s_0_1, s_0_2));
    printf("%s\n", inter(s_1_1, s_1_2));
    printf("%s\n", inter(s_2_1, s_2_2));
    return 0;
}*/
