#include<stdio.h>
#include<math.h>

int main(){
    double a,b,c,discrimanant,root1,root2,realPart,imagPart;

    // printf("Enter the value of a: ");
    // scanf("%lf",&a);

    // printf("Enter the value of b: ");
    // scanf("%lf",&b);

    // printf("Enter the value of c: ");
    // scanf("%lf",&c);

    printf("Enter the coefficnt a,b and c: ");
    scanf("%lf %lf %lf",&a,&b,&c);

    discrimanant = b * b - 4 * a * c;
    if(discrimanant > 0){ // roots are real and different
        root1 = (-b + sqrt((discrimanant))/2 * a);
        root2 = (-b + sqrt((discrimanant))/2 * a);
        printf("Roots are real and different.\n");
        printf("root1 = %.2f\n", root1);
        printf("root2 = %.2f\n", root2);
    }

    else if(discrimanant == 0){ //root are real and equal
        root1 = root2 = -b/(2*a);
        printf("root1 = root2= %.21f",root1);
    }

    else{//roots are imaginary
        realPart = -b / (2*a);
        imagPart = (sqrt((discrimanant))/2 * a);
        printf("real root =  %.2f \n",realPart);
        printf("Imaginary root =  %.2f",imagPart);
    }

    return 0;
}