#include <stdio.h>

int main()
{
    int X;
    int sum=0, i;
    
    while(1)
    {
		scanf("%d", &X);
		
		if(X==0)
			break;
			
		sum = 0;
		
		if(X % 2 == 0)
			sum += X;
				
		else
		{
			sum+= X+1;
			X++;
		}
		
		for(i = 0 ; i < 4; i++)
		{
			X+=2;
			sum+=X;	
		}
				
		printf("%d\n", sum);
		
	}
    
    return 0;
}
