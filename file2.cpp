#include <stdio.h>

main()
{
    int y;
	printf("\nZadaj cislo :");
    scanf("%d",&y);
    
    if(y%2==0)
    {
    	if(y%3==0)
		{
			printf("\nCislo je delitelne 2 aj 3");
	    }
		else
		{
			printf("\nCislo je delitelne iba 2");
		}
	}
	else
	{
		if(y%3==0)
		{
		     printf("\nCislo je delitelne iba 3");	
		}
		else
		{
			printf("\nCislo nieje delitelne ani 2 ani 3");
		}
	}
          
}
