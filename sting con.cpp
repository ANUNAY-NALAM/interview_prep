
#include <stdio.h>
#include <string.h>
 
int main()
{
	char str1[100], str2[100];
     printf("\n Enter two stings");
     gets(str1);
     gets(str2);
    char str3[100];
    int i = 0, j = 0;
    printf("\nFirst string: %s", str1);
    printf("\nSecond string: %s", str2);
    while (str1[i] != '\0') {
        str3[j] = str1[i];
        i++;
        j++;
    }
    i = 0;
    while (str2[i] != '\0') {
        str3[j] = str2[i];
        i++;
        j++;
    }
    str3[j] = '\0';
    printf("\nMerged string: %s", str3);
  	for (i = 0; str3[i]!='\0'; i++)
  	{
  		if(str3[i] >= 'a' && str3[i] <= 'z')
  		{
  			str3[i] = str3[i] - 32;
		}		
  		else if(str3[i] >= 'A' && str3[i] <= 'Z')
  		{
  			str3[i] = str3[i] + 32;
		}
  	}

  	printf("\n The Given String after Toggling Case of all Characters = %s", str3);
  	
  	return 0;
}

