/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char name[50];
    int n;
    FILE *swm,*yg,*slp,*crd,*jog,*med;
    printf("Enter your name ");
    scanf("%s",name);
    printf("Your Options are:\nPRESS\n1.For Swimming\n2.For Yoga\n3.For Sleeping\n4.For Cardio exercises\n5.For Jogging\n6.Meditation\n");
swm=fopen("swimming","a");
yg=fopen("yoga","a");
slp=fopen("sleeping","a");
crd=fopen("cardio","a");
jog=fopen("jogging","a");
med=fopen("meditation","a");
printf("Enter your choice  ");
scanf("%d",&n);
if(n==1)
fprintf(swm,"%s\n",name);
else if(n==2)
fprintf(yg,"%s\n",name);
else if(n==3)
fprintf(slp,"%s\n",name);
else if(n==4)
fprintf(crd,"%s\n",name);
else if(n==5)
fprintf(jog,"%s\n",name);
else if(n==1)
fprintf(med,"%s\n",name);
}
