#include <stdio.h>

void print_Fibonnaci(int * seq){

    int i;
    for(i=0;i<12; i++){

        printf("%d ",seq[i]);
         
    }
    printf("\n");
   
}

void verificandoNumero(int n, int * seq){

    int i, verificador;
    for(i=0; i<12; i++){

        if( n == seq[i]){
            verificador += 1;
        }
    }

    printf("\n");

    if(verificador != 0) printf(" O valor %d, está na sequencia!\n",n);
    else printf(" O valor %d, NAO está na sequencia!\n",n);

    printf("\n");
}

int main(){

    int i, numero;
    int seq[12];
    seq[0] = 0;
    seq[1] = 1;
    
    for(i=2;i<12; i++){

        seq[i] = seq[i-2] + seq[i-1]; 
    }
   

    printf("Digite um numero para verificar se ele está na sequencia de fibonnaci: ");
    scanf("%d",&numero);

    verificandoNumero(numero, seq);
    print_Fibonnaci(seq);



    return 0;
}