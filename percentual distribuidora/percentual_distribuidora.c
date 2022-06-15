#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	/*faturamento mensal por estado*/
	float sp = 67.83643;
	float rj = 36.67866;
	float mg = 29.22988;
	float es = 27.16548;
	float outros = 19.84953;
	float total;
	float pSp, pRj, pMg, pEs, pOutros; //variáveis de percentual de cada estado 
		
	total = sp + rj + mg + es + outros;
	
	printf("--------------------------------------\n");
	printf("-       PERCENTUAL DISTRIBUIDORA     -\n");
	printf("--------------------------------------\n\n");
	
	printf ("TOTAL - R$ %f\n\n", total);
	
	pSp = (sp/total) * 100;
	pRj = (rj/total) * 100;
	pMg = (mg/total) * 100;
	pEs = (es/total) * 100;
	pOutros = (outros/total) * 100;
	
	printf("Porcentagem de SP %.2f\n", pSp);
	printf("Porcentagem de RJ %.2f\n", pRj);
	printf("Porcentagem de MG %.2f\n", pMg);
	printf("Porcentagem de ES %.2f\n", pEs);
	printf("Porcentagem de Outros %.2f\n", pOutros);
	
	
	return 0;
}
