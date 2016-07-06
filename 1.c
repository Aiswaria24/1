#include<stdio.h>
#include<string.h>
int main()
{
char n[200];
int a,b,c,d;
int c1;
a=b=c=d=0;
printf("Enter an string:");
gets(str);
for(c1=0;str[c1]!=NULL;c1++)
{
if(str[c1]>='0'&&str[c1]<='9')
a++;
else if((str[c1]>='A'&&str[c1]<='Z')||(str[c1]>='a'&&str[c1]<='z'))
b++;
else if(str[c1]==' ')
c++;
else
d++;
}
printf("\na:%d\nb:%d\nc:%dd:%d",a,b,c,d);
return 0;
}
