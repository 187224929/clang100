#include <stdio.h>

int main(){


    //题目：求1+2!+3!+...+20!的和 
    //

    float n ;;
    int t = 1;
    int sum = 0;

    for(n = 1; n <= 20; n++){
        t = t*n;
        sum = sum +t;
        //printf("%d\n", sum);
    }
   
   printf("sum is %d\n", sum); 

}
