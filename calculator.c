#include <stdio.h>
#include <stdlib.h>

void print_options(){
    printf("\n----- Choose from the options: -----\n");
    printf("\t[1] Sum\n");
    printf("\t[2] Subtraction\n");
    printf("\t[3] Multiplication\n");
    printf("\t[4] Division\n");
    printf("\t[-1] Exit\n");
}

void sum(float x, float y){
    printf("%.2f\n", x+y);
}

void subtraction(float x, float y){
    printf("%.2f\n", x-y);
}

void multiplication(float x, float y){
    printf("%.2f\n", x*y);
}

void division(float x, float y){
    if(y == 0){
        printf("Error: Division by zero is not allowed.\n");
        return;
    }
    else{
        printf("%.2f\n", x/y);
    }
}

int main(){
    float n1, n2;
    int option;
    char buffer[20];
    
    printf("First, choose two numbers\nn1: ");
    fgets(buffer, 10, stdin);
    n1 = atof(buffer);
    printf("n2: ");
    fgets(buffer, 10, stdin);
    n2 = atof(buffer);

    for(;;){
        print_options();
        fgets(buffer, 10, stdin);
        option = atoi(buffer);
        if(option == 1){
            sum(n1, n2);
        }
        else if(option == 2){
            subtraction(n1, n2);
        }
        else if(option == 3){
            multiplication(n1, n2);
        }
        else if(option == 4){
            division(n1, n2);
        }
        else if(option == -1){
            printf("Exiting...\n");
            break;
        }
        else{
            printf("Invalid option. Please try again.\n");
        }
    }
}
