#include<stdio.h>
int stack[100],choice,n=100,top,x,i;
void push()
	{
		if(top>=n-1)
			printf("stack is over flow");
		else
		{
			printf("enter the value to be pushed\n");
			scanf("%d",&x);
			top++;
			stack[top]=x;
		}
	}
void pop()
	{
		if(top<=-1)
			printf("stack is under fiow");
		else{
			printf("\nthe popped element is %d",stack[top]);
			top--;
			}
	}
void display()
	{
		if(top>=0)
		{
			printf("\nelement in the stack");
			for(i=top;i>=0;i--)
				printf("%d",stack[i]);
		}
		else 
			printf("the stack is empty");
}
void main()
	{
		top=-1;
 	do{
		printf("\n 1.push\n 2.pop\n 3.display\n 4.exist");
		printf("enter the choice");

		scanf("%d",&choice);
		switch(choice)
			{
				case 1:
				{
					push();
					break;
				}
				case 2:
				{
					pop();
					break;
				}
				case 3:
				{
					display();
					break;
				}
				case 4:

				{
					printf("exit");
					break;
				}
			}
		}
	while(choice!=4);
	
	}
