#include <stdio.h>

int EhDivisivel(int n){
        int i, cont=0;
        for(i=1; i<=n; i++){
                if(n % i == 0)
                ++cont;
        }
        if(cont == 2){
                return 0;
        }else
        return 1;
}

int EhPrimo(int n){
        if(EhDivisivel(n)){
                return 0;
        }else{
                return 1;
        }
}


int main(){
        int n;
        scanf("%d", &n);
        if(EhPrimo(n)){
                printf("Eh primo!!!\n");
        }else{
                printf("nao eh primo!!!\n");
        }
        return 0;
}
