#include <stdio.h>

void Imprime(int n){
    int i, j;

    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            printf("%d ", i);
        }
        puts("");
    }
}

int main(){
    int n;
    scanf("%d", &n);

    Imprime(n);

    return 0;
}
