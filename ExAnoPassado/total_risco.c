#include "result.h"

int tempo = 0;
int proximidade = 0;

long long total_risco(int *vec, int num) {
	int count = 0;
	int verify = -1; // variável auxiliar para verificar se existem 3 medições válidas consecutivas
	
	long value = 0;
	
	long sum = 0;
	
	for(int i = 0; i < (num * 2); i++) { // ciclo é feito em pares de valores
		tempo = *(vec + i);
		i++; // para passar ao próximo par
		proximidade = *(vec + i);
		
		if(result() == 0xFFFFFFFF) value = -1;
		else value = result(); 
	
		if(value != 0) {
			count++;
			if (count == 3) {
				verify = 1;
			}
		} else {
			count = 0;
		}
		sum = sum + value;
	}
	
	if(verify == 1) {
		return sum;
	} else {
		return -1;
	}
}
