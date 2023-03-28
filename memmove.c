#include<stdio.h>
#include<string.h>
int main()
{
char str[]="start stop";

printf("actual string=%s\n",str);
memcpy(str,&str[2],4*sizeof(char));//if size of source greater than size will not be allowed.
printf("memcpy=%s\n",str);
memmove(str,&str[2],4*sizeof(char));//of size of str greater than the size of destination it replace.
printf("memmove=%s\n",str);
strcpy(str,"stop stop ");//stze should be same as allocated in string not more than that will be accepted.
printf("strcpy=%s\n",str);

}
