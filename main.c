#include "libasm.h"
#include <stdio.h>
#include <string.h>

int	main()
{
	printf("strlen tests: (expected and mine)\n");
	printf("%ld\n%ld\n",	strlen(""),		ft_strlen(""));
	printf("\n%ld\n%ld\n",	strlen("test"),	ft_strlen("test"));
	printf("\n%ld\n%ld\n",	strlen("12\n3"),ft_strlen("12\n3"));
	printf("\n%ld\n%ld\n",	strlen("test"),	ft_strlen("test"));
	printf("\n%ld\n%ld\n",	strlen("test"),	ft_strlen("test"));
	
	printf("\nstrcpy tests: (expected and mine)\n");
	char *test = "test";
	printf("%s\n%s\n", 		strcpy(test, ""),					ft_strcpy(test, ""));
	printf("\n%s\n%s\n",	strcpy("hello world!", "test"),		ft_strcpy("hello world!", "test"));

	return 0;
}
