#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[], char* envp[])
{
	if(argv[1] != NULL)
	{
		if(getenv(argv[1]) != NULL)
		{
			if((argv[2] != NULL) && (strcmp(argv[2], "-v") == 0))
			{		
				printf("%s\n", getenv(argv[1]));
			}
			return 1;
		}	
	}
	return 0;
}
