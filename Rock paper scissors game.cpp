#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int computer_select(int a)
{
	if(a==1)
	char AI[]={"stone"};
    else if(a==2)
	char AI[]= {"paper"};
    else
	char AI[]={"scissor"};
    return 0;
}
int main()
{
	char user[10],  AI[10], stone[]={"stone"}, paper[]={"paper"}, scissor[]={"scissor"};
	int random=0;
	printf("\nEnter stone paper or scissor: \nUser: ");
	gets(user);
	srand(time(0));
	random= rand() % 3 + 1;
	if (strcmp(user, stone) == 0)
	{
		computer_select(random);
		if(random==1)
		{
			printf("Computer: stone");
			printf("\n***Draw***");
		}
		else if(random==2)
		{
			printf("Computer: paper");
			printf("\n***Lose***");
		}
		else
		{
			printf("Computer: scissor");
			printf("\n***Win***");
		}
    	main();
  	}
	else if (strcmp(user, paper) == 0)
	{
    	computer_select(random);
		if(random==1)
		{
			printf("Computer: stone");
			printf("\n***Win***");
		}
		else if(random==2)
		{
			printf("Computer: paper");
			printf("\n***Draw***");
		}
		else
		{
			printf("Computer: scissor");
			printf("\n***Lose***");
		}
    	main();
  	}
	else if (strcmp(user, scissor) == 0)
	{
    	computer_select(random);
		if(random==1)
		{
			printf("Computer: stone");
			printf("\n***Lose***");
		}
		else if(random==2)
		{
			printf("Computer: paper");
			printf("\n****Win***");
		}
		else
		{
			printf("Computer: scissor");
			printf("\n***Draw***");
		}
    	main();
  	}  	
   else
    {
      printf("***Try again***\n" );
      main();
    }
	return 0;
}


