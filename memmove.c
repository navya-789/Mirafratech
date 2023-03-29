#include<stdio.h>
#include<string.h>
void memcopy(void *str,void *dcs,int n);
int main()
{
	char str[]="start stop";
	printf("actual string=%s\n",str);
	memcopy(str,&str[2],4*sizeof(char));
	printf("memcopy=%s\n",str);
	memcpy(str,&str[2],4*sizeof(char));//if size of source greater than size will not be allowed. overlap is happen in memcpy.
	printf("memcpy=%s\n",str);
	memmove(str,&str[2],4*sizeof(char));//of size of str greater than the size of destination it replace.
	printf("memmove=%s\n",str);
	strcpy(str,"stop stop ");//stze should be same as allocated in string not more than that will be accepted.
	printf("strcpy=%s\n",str);
}
void memcopy(void *str,void *dcs,int n)
{
	int i=0;
	char *p=(char *)str;
	char *c=(char *)dcs;
	for(i=0;*p!=0;i++)
	{
		c=p;
		c++;
		p++;
	}
}
