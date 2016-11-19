#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){

    int arr1[13] = {125,13,702,3,2,4,345,623,499,21,535,23,31};
    int arr2[15] = {34,32,654,2123,45,69,43,54,2,15,345,66,77,22,45};
    // 要求 合并两个数组     
    //
    int i = 0;
    int j = 0;
    int ALL = sizeof(arr1)/sizeof(int) + sizeof(arr2)/sizeof(int);
    int arr3[ALL];

    for( i = 0; i < sizeof(arr1)/sizeof(int); i++ ){
    
        arr3[i] = arr1[i]; 
    }

    for( j = 0; j < sizeof(arr2)/sizeof(int); j++ ){
    
        arr3[sizeof(arr1)/sizeof(int)+j] = arr2[j];
    }

    for( int k = 0; k < ALL; k++ ){
    
        printf("The arrys number is %d\n", arr3[k]);
    }

    return EXIT_SUCCESS;

}
