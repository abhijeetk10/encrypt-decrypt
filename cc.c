#include"stdio.h"
#include"string.h"
#include"stdlib.h"
int main()
{
    char st[1000];
    int i,j,n,key,choice,p=0,d;
    char al[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\0'};
    char new[100];
	printf("Enter string\n");
	gets(st);
	printf("Enter Key between 1-26\n");
	scanf("%d",&key);
    printf("what do u want?give us choice...from following\n 1.encrypted msg \n 2.decrypted msg\n");
	scanf("%d",&choice);
	if(choice==1)
	{
	for(i=0;i<strlen(st);i++)
	{
		for(j=0;j<26;j++)
		{

          if(st[i]==al[j])
          {
          	printf("%c",al[(j+key)%26]);
          }
          if(st[i]>='0'&&st[i]<='9')
			{
				while(st[i]!='\0')
				{
                  new[p]=st[i];
                  p++;
                  i++;
				}
				new[p]='\0';
                d=atoi(new);
				printf("%d",(d+key));
			}
		}
		
	}
}

else if(choice==2)
{
  for(i=0;i<strlen(st);i++)
	{
		for(j=0;j<26;j++)
		{
          if(st[i]==al[j])
          {
          	printf("%c",al[(j-key)%26]);
          }
           if(st[i]>='0'&&st[i]<='9')
			{
				while(st[i]!='\0')
				{
                  new[p]=st[i];
                  p++;
                  i++;
				}
				new[p]='\0';
                d=atoi(new);
				printf("%d",(d-key));
			}
		}
		
	}
}
else
printf("INVALID INPUT\n");
	

}