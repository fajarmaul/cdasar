#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, x;
    int data[100];
    scanf("%d", &x);
    for(i=0;i<x;i++){
        scanf("%d", &data[i]);
    }

    for(i=0;i<x;i++){
        printf("data ke [%d] = %d \n", i, data[i]);
    }
return 0;
}
