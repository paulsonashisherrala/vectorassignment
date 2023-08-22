#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "lib.h"

int main()
{
    int a = 7;//assumed value
    double angle = radians(30);//angle=30
    int m = 2, n = 1;


    Node* A = loadtxt("A.dat"); // Load the point A from the .dat file into a linked list
    Node* e1 = loadtxt("e1.dat"); // Load e1(1,0) from the .dat file into a linked list
    
    Node* P = np_array(a*cos(angle),a*sin(-angle));//creating node P
    Node* Q = np_array(a*cos(angle),a*sin(angle));//creating node Q
    
    Node* B = mat_val(e1, a);
    print(B);
    save("B.dat", B, m, n);
    return 0;
}

