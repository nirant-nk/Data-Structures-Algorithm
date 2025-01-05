#include<stdio.h>

int* singlePointer(int* ptr){
    printf("\n| Address: %p | Value: %d |",(void *)ptr,*ptr);
    return ptr;
}
void doublePointer(int* ptr){
    int** dptr = &ptr;
    printf("\n| Address: %p | Addrs-Ptr: %p | Value: %d | ",(void **)dptr,(void *)*dptr,**dptr);
}
int main(){

    int x=5,y=10;

    doublePointer(singlePointer(&y));

    return 0;

}

/*

    Single Pointers:
        # Syntax:
                int x = 5; // Integer varibale 'x' equals '5'.
                int* ptr = &x; // Integer pointer variable 'ptr' equals 'Address of x'
                printf("\nValue: %d | Address: %p",*ptr,&ptr);
                // *ptr : Here, * is a dereference operator 
                    // -> | Gives the value stored at the address where ptr points. 
                // &ptr : Here, & is a address operator
                    // -> | Gives the address of variable where ptr points.
        # Defn: 
                A pointer is a Variable that stores address of another variable.

*/
/*

    Double Pointers:
        # Syntax:
                int x = 5; // Integer varibale 'x' equals '5'.
                int* ptr = &x; // Integer pointer variable 'ptr' equals 'Address of x'.
                int** dptr = &x; // Integer double pointer variable 'dptr' equals 'Address of ptr'.
                printf("\nValue: %d | Address: %p | Addrs-Ptr: %p ",**dptr,&dptr,*dptr);
                // **dptr : Here, ** is a dereference operator 
                    // -> | Gives the value stored at the address where dptr originally points. 
                // *dptr : Here, * is a dereference operator 
                    // -> | Gives the value stored at the address where dptr points. (in this case an address) 
                // &dptr : Here, & is a address operator
                    // -> | Gives the address of pointer where dptr points.
        # Defn: 
                A double pointer is a Variable that stores address of another pointer.

*/
/*

    Multi Pointers:
        # Syntax:
                int x = 5; // Integer varibale 'x' equals '5'.
                int* ptr = &x; // Integer pointer variable 'ptr' equals 'Address of x'.
                int** dptr = &ptr; // Integer double pointer variable 'dptr' equals 'Address of ptr'.
                .....
                int******n nptr = &(n-1)ptr; // Integer double pointer variable 'nptr' equals 'Address of (n-1)th ptr'.
                printf("\nValue: %d | Address: %p | Addrs-Ptr: %p ",*******nptr,&nptr,******(n-1)ptr);
                // *******nptr : Here, ********** is a dereference operator 
                    // -> | Gives the value stored at the address where nptr originally points. 
                // *nptr : Here, * is a dereference operator 
                    // -> | Gives the value stored at the address where nptr points. (in this case an address) 
                // &nptr : Here, & is a address operator
                    // -> | Gives the address of pointer where nptr points.
        # Defn: 
                A multi pointer (nth) is a Variable that stores address of another (n-1)th pointer.

*/