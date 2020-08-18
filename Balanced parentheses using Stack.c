#include<stdio.h>
#include<string.h>
#define max 10
struct stack{
	char st[max];
	int top;
}stk;
void push(char);
int pop();
int main()
{
	char s[max];
	int i;
	stk.top=-1;
	scanf("%s",s);
	int l=strlen(s);
	for(i=0;i<l;i++)
	{

		if(s[i]=='(' || s[i]=='{' || s[i]=='[')
		{
			push(s[i]);
			continue;
		}
		else if(s[i]==')' || s[i]=='}' || s[i]==']')
		{
			if(s[i]==')')
			{
			 if(stk.st[stk.top]=='(')
			 {
			 	pop();
			 }
			 else
			 {
			 	printf("\n Unbalanced");
			 	break;
			 }
			}
			if(s[i]=='}')
			{
				if(stk.st[stk.top]=='{')
				{
					pop();
				}
				else
				{
					printf("\n Unbalanced");
					break;
				}
			}
			if(s[i]==']')
			{
				if(stk.st[stk.top]=='[')
				{
					pop();
				}
				else
				{
					printf("\n Unbalanced");
					break;
				}
			}
		}
	}
if(stk.top==-1)
{
	printf("\n Balanced");
}
}
void push(char item)
{
	if(stk.top==max-1)
	{
		printf("\n Stack Is Full");
	}
	else
	{
		stk.top=stk.top+1;
		stk.st[stk.top]=item;
	}
}
int pop()
{
	if(stk.top==-1)
	{
		printf("\n Stack Is Empty");
	}
	else
	{
		stk.top=stk.top-1;
	}
}
