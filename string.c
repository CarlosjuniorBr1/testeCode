#include <stdio.h>
#include <string.h>

void inverteString(char * str){
    int i = 0;
    int  tam = strlen(str);
    
    for(i = tam; i>=0; i--){

        printf("%c",str[i]);
    }    
    printf("\n");
}
int main(){

    char str[32];
    scanf("%s",str);

    printf("Imprimindo a string invertida: \n");
    inverteString(str);



    return 0;
}