#include<stdio.h>
#include <conio.h>

int main ()
{
    int i;
    
    
    for(i=1;i<=100;i++)
    {
    	if (i % 3 == 0 && i % 7 == 0)
        {
    		printf("%i e divisivel por 3 e por 7\n",i);
		}
		else
        {
			if(i % 3 == 0 && i % 7 != 0)
            {
				printf("%i e divisivel por 3 e nao e divisivel por 7\n",i);
			}
		else
        {
			if(i % 3 != 0 && i % 7 == 0)
            {
				printf("%i nao e divisivel por 3 e e divisivel por 7\n",i);
			}
		else
        {
			printf("%i nao e divisivel por 3 e nem por 7\n",i);
		}
    }
}	
