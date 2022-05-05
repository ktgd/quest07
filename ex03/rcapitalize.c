/*
**
** QWASAR.IO -- rcapitalize
**
** @param {char*} param_1
**
** @return {char*}
**
*/

#include <ctype.h> // is*, to*
#include <stddef.h> // size_t
#include <string.h> // strlen, strtok
#include <stdlib.h> // malloc
//#include <stdio.h> // printf

#undef isnull

#define isnull(c) ( c == '\0' ? 1 : 0 ) //#define isnull(c) ({int _c = (c); c == '\0' ? 1 : 0; }) // KVPB's IsNULL

/*int isnull(int c)
{
	return c == 0 ? 1 : 0;
}*/ // KVPB's IsNULL

char* rcapitalize(char* param_1)
{
	size_t i = 0;
	size_t l = strlen(param_1);
	char* s = malloc( ( l + 1 ) * sizeof(param_1) );
	//char* C = " \t\0";
	//char* s = malloc( l * sizeof(char) );

	//s = strtok(param_1, C);
	//while ( *++s ) //++ )
	//	s = strtok(NULL, C);
	//
	while (param_1[i] != '\0') //( *++param_1 )
	{
		if ( isspace(param_1[i]) || ispunct(param_1[i]) )
        {
            s[i] = param_1[i];
			//i++;
        }
		if ( ! isspace(param_1[i]) && ! ispunct(param_1[i]) )
		{
			if ( isspace(param_1[ i + 1 ]) || ispunct(param_1[ i + 1 ]) || isnull(param_1[ i + 1 ]) )
			{
				s[i] = toupper(param_1[i]); //-= 32;
			}
			if ( ! isspace(param_1[ i + 1 ]) && ! isnull(param_1[ i + 1 ]) ) //else if (!isspace(param_1[ i + 1 ]) && !isnull(param_1[ i + 1 ]))
			{
				s[i] = tolower(param_1[i]); //+= 32;
			}
			//else
			//	;
		}
		i++;
	}
	return s;
}

/*int main()
{
	char* s_0 = "a FiRSt LiTTlE TESt";
	char* s_1 = "";
	char* s_2 = "SecONd teST A LITtle BiT   Moar comPLEX";
	char* s_3 = "   But... This iS not THAT COMPLEX";

	printf("%s\n", rcapitalize(s_0));
	printf("%s\n", rcapitalize(s_1));
	printf("%s\n", rcapitalize(s_2));
	printf("%s\n", rcapitalize(s_3));
	return 0;
}*/
