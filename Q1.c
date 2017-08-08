#include <stdio.h>

int Converte(int hora){
    return hora - 12;
}

int main(){
    int hora, minuto;

    scanf("%d:%d", &hora, &minuto);
    if(hora > 12){
        hora = Converte(hora);
        printf("%d:%d P.M.\n", hora, minuto);
    }else{
        printf("%d:%d A.M.\n", hora, minuto);
    }


    return 0;
}
