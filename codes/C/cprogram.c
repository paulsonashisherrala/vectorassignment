#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"lib.h"
int main()
{
double **A,**B,**P,**Q,**e1;//initializing the matrices
double angle=radians(30);//theta= 30 degrees
double a=7,i=2,j=1;//assumed value of a, and (2x1) matrix

A=loadtxt("A.dat",2,1);
e1=loadtxt("e1.dat",2,1);
B=mult_int(a,e1,2,1);
P=calculate_P(a,angle);
Q=calculate_Q(a,angle);
//save_D(P,2,1);
save_D(Q,2,1);
return 0;
}
