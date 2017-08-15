#include <stdio.h>
#include <stdlib.h>

typedef struct{
	float h;
	char sexo;
}tPerson;

int main(){
	tPerson dado[11];
	int i, a, b, cm=0, cf=0;
	float maiorh, menorh, mediam=0, mediaf=0;

	for(i=0; i<10; i++){
		printf("Digite a altura e o genero: ");
		scanf("%f %c", &dado[i].h, &dado[i].sexo);
		getchar();
	}
	
	maiorh = 0;
	menorh = 0;

	for(i=0; i<10; i++){
		if(dado[i].h > maiorh){
			maiorh = dado[i].h;
			a = i;		
		}
		if(dado[i].h < menorh){
			menorh = dado[i].h;	
			b = i;	
		}
	}
	printf("Maior altura e sexo: %.2f %c\n Menor altura e sexo: %.2f %c\n\n", maiorh, dado[a].sexo, menorh, dado[b].sexo);	
		
	for(i=0; i<10; i++){
		if(dado[i].sexo == 'M'){
			mediam += dado[i].h;
			++cm;		
		}
		else{
			mediaf += dado[i].h;
			++cf;
		}
	}
	printf("*** Media das alturas ***\n"
		"Masculino: %.2f Feminino: %.2f\n", mediam/cm, mediaf/cf);
	printf("Quantidade masculino: %d\n"
		"Quantidade feminino: %d\n", cm, cf);

	return 0;
}
