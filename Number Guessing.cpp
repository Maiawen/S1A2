#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int a[4],b[4],n,i,j,p,num,A=0,B=0;
int main()
{
	printf("Do you dare to start the game?\n\n");
    printf("---------------------------------\n");
	printf("0--No, I am a coward.\n");
    printf("1--Yes, I can I up, you don't bb.\n");
    printf("---------------------------------\n\n");
    scanf("%d",&num); 
Re:
	srand((unsigned)time(NULL));
	while(j<4)
	{
		again:
		n=rand()%10;
		for(i=0;i<j;i++)
		  if(a[i]==n)
		     goto again;
	    a[j++]=n;
	}
    
switch(num)
{
	case 0:
		printf("I KNOW IT, GOODBYE LOSER!\n");
		while(1)
		{
	     printf("Give you some color to see.\nYOU ARE A LOSER\n");
		}
		goto end;
	case 1:
		printf("\nLET'S SEE, THEN. XD\n");goto begin;
}
begin:
	printf("\nOkay, it seems that you are in this, here's the rule:\n");
	printf("   You need to guess four numbers, \n");
	printf("   if the single number you guess matches both the number and place,\n");
	printf("   you'll get one A, else, if it only matches the number but the place,\n");
	printf("   it'll respond with one B.\n\nClear? Let's begin!\n\nGive me four numbers you guess:\n");
	printf("(End up with a space after entering.)\n\n");
	i=1;
chance:
	A=0;B=0;
	for(j=0;j<4;j++)
	     {
		 scanf("%d",&n);
	     b[j]=n;
	     }
	for(j=0;j<4;j++)
	     {
		 if(b[j]==a[j]){A++;}
	     for(p=0;p<4;p++)
	         if(p!=j&&b[j]==a[p]){B++;}
	     }
	printf("%dA%dB\n",A,B);
	if(A==4&&B==0)
	{
	printf("Smart Kid! Only %d times you make it! Do you want more?\n Answer 0 or 1.\n",i);
	scanf("%d",&n);goto Re;
    }
    else
    {
	i++;
    printf("Try again!\n");goto chance;
    }
    end:
    return 0;
}
