#include<stdio.h>
#include<math.h>

double modulus(int, int);
double division(double, double);
void print_menu();

int main() {
    int choice;
    double first, second, result;
    while(1){
    print_menu();
    scanf("%d" , &choice);
    if (choice == 7) {
     break;
    }
    
     


    printf("ENTER THE FIRST NUMBER:");
    scanf("%lf" ,&first);
    printf("ENTER THE SECOND NUMBER:");
    scanf("%lf" ,&second);

    switch(choice) {
        case 1://add
        result = first + second;
        break;
        case 2://subtract
        result = first - second;
        break;
        case 3://multiply
        result = first * second;
        break;
        case 4://divide
        result = division(first, second);
        break;
        case 5://modulus
        result = modulus((int)first, (int)second);
        break;
        case 6://power
        result = pow(first, second);
        break;
    }
    printf("RESULT OF OPERATION = %.2lf\n", result);

};
return 0;
}

double division(double a, double b){
if(b == 0) {
fprintf(stderr,"INVALID ARGUEMENT FOR DIVISION");
return NAN;
}else {
    return a / b;
}
}
double modulus(int a, int b){
if(b == 0) {
fprintf(stderr,"INVALID ARGUEMENT FOR MODULUS");
return NAN;
}else {
    return a % b;
}
}






void print_menu() {
     printf("-----------------------------------------------\n\n");
     printf("WELCOME TO THE CALCUBE\n");
     printf("1.ADD\n");
     printf("2.SUBTRACT\n");
     printf("3.MULTIPLY\n");
     printf("4.DIVIDE\n");
     printf("5.MODULUS\n");
     printf("6.POWER\n");
     printf("7.EXIT\n");
     printf("ENTER YOUR CHOICE:");



}
