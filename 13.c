#include <stdio.h>

int main(int argc, char *argv[]){


    int i;

    for(i = 0; i < 1000; i ++){
    
        int a = i/100;
        int b = (i/10)%10;
        int c = i%10;
        if(a*a*a + b*b*b +c*c*c == i){
        
            printf("the shuixianhua is %d\n", i);

        }

    }


    return 0;

    


}
