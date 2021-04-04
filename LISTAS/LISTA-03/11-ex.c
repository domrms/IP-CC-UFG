#include <stdio.h>

int main() {
	
	int n;
	int ts = 0, tsm = 0;
	int x, ant;

	scanf("%d", &n);

	scanf("%d", &ant);
	ts = 1;
	tsm = ts;
	n--;
	while(n>0) {

		scanf("%d", &x);
		if(x>ant) {
			ts++;
			if(ts>tsm) tsm = ts;
		} else {
			ts = 1;	
		}
		ant = x;
		n--;
	}
	printf("O comprimento do segmento crescente maximo e: %d\n", tsm);

	return 0;
}