// Write a program to find the roots of quadratic equation
#include <complex.h>
#include <math.h>
#include <stdio.h>
int main()
{
    double a, b, c, discriminant, root1, root2, realpart, imgpart;
    printf("Enter the coefficient a,b,c: ");
    scanf("%lf %lf %lf",&a,&b,&c);


    discriminant = b*b - 4 * a * c;

    //condition for real & different roots
    if(discriminant > 0){
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
    }

    //condition for real and equal roots
    else if (discriminant == 0){
        root1 = root2 = -b/2*a;
        printf("root1 = root2 = %.21f ",root1);
    }

    else{
        realpart = -b/2*a;
        imgpart= sqrt(-discriminant)/ 2*a; //-discrimant coz its < 0

        printf("root1 = %.21f and root1 = %.21f ",realpart,imgpart);
    }

    return 0;

}