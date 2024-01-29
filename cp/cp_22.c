# include <stdio.h>
void main()
{
int a=2,*p,**q;
p=&a;
q=&p;
//clrscr();
printf  ("\n Value of a= %d Address of a=%u",a,&a);
printf  ("\n Through *p Value of a= %d Address of a=%u",*p,p);
printf  ("\n Through **q Value of a= %d Address of a=%d",**q,*q);
int b = 4;
int  *ptr;
ptr = &b;
printf  ("\n ptr now contains %u",ptr);
ptr = ptr + 4; 
printf  ("\n ptr now contains %u",ptr);
ptr = ptr - 2; 
printf  ("\n ptr now contains %u",ptr);
}