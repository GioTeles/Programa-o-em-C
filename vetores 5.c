#include <stdio.h>
#define T 10

void VetorX(int x[], int t){

    int i;
    for(i=0; i<t; i++){

        if(i%2==0)
            x[i] = 0;
        else
            x[i] = 1;

    }
}

void MostraVetor (int x[], int t){

    int i;

    for(i=0; i<t; i++){

        printf("\nx[%d]: %d", i, x[i]);
    }

}

int main(){

    int x[T];

    VetorX (x, T);
    MostraVetor (x, T);

    return 0;

}
