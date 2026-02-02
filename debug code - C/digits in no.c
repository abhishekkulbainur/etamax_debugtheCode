#include<stdio.h>

int no(int n)
{
	int i = 1;               
	// BUG 1: wrong initialization (starts from 1, count becomes +1 extra)
	// FIX : int i = 0;

	for(i=0; n = 0; i++)     
	// BUG 2: assignment instead of comparison ? loop never runs
	// FIX : for(i=0; n != 0; i++)
	{
	n = n / 10;            
	}
	return i + 1;           
	// BUG 3: extra +1 gives wrong digit count
	// FIX : return i;
}

void main()
{
	int n;
	printf("Enter the no");
	scanf("%f",&n);          
	// BUG 4: wrong format specifier (%f for int)
	// FIX : scanf("%d",&n);

	printf("no %d",no(n+1)); 
	// BUG 5: wrong argument (adds 1, incorrect result)
	// FIX : printf("no %d", no(n));
}

