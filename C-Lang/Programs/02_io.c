#include<stdio.h>


/* 

    Syntax of Function:

    return_type function_name([datatype parameter]list separated by commas){
        // function body
    }

*/
int sum(float num1,float num2){
    return num1+num2;
};

void main(){
    printf("\nSum = %d",sum(2.2,6));
    printf("\nSum = %d",sum(2,6));
}

/*

    Data Type         |    operator
______________________|__________________
                      |    
    int               |    %d or %i
    float double      |       %f
    char              |       %c
    string            |       %s
    
*/