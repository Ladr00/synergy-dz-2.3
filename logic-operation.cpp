#include <stdio.h>

main()
{
	//users
	long long int u1=123;
	long long int p1=321;
	//pass
	long long int u2=456;
	long long int p2=654;
	long long int user,pass;
	printf("user=");
	scanf("%i",&user);
	printf("pass=");
	scanf("%i",&pass);
	
	if(((user==u1)&&(pass==p1))||((user==u2)&&(pass==p2)))
	{
		printf("Welcome user ");
		printf("%i",(int)user);
		
		
	}
	else
	{
		printf("error");
	}
}
