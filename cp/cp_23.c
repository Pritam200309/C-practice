# include <stdio.h>
void main()
{
int a[5]={0,1,2,3,4};
int *p[5],i;
for (i=0;i<5;i++)
{
	p[i]=a+i;
}
for (i=0;i<5;i++)
{
	printf ("\t %d at location \t %u  at location %u\n",*(*p+i),*(p+i),p+i);
	printf ("%u  at location ",*(p+i));
	printf ("%u",p+i);
}
printf ("\n\n Integer required 4 bytes, address require 4 bytes");
}