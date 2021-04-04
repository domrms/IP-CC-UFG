#include <stdio.h>

int main(){
		unsigned long int codigo, x, y;
		float c, v, i, l, lm;
		float tc, tv, ttc, ttv, LT, LucroT, t10=0.0, t1020=0.0, t20=0.0;
		int q, qant, r;

		lm=0.0;
		qant=0.0;

		while(1){
		r = scanf("%lu %f %f %d",&codigo, &c, &v, &q);

		if(r==EOF) break;

		tc=c*q;
		tv=v*q;
		l=tv-tc;

		if(l<0.10*tv) {
		    t10++;}
		else if(l>=0.10*tv && l<=0.20*tv) {
		    t1020++;}
		else if(l>0.20*tv){ 
		    t20++;
		}
		if(l>lm) {
		    lm =l;
		    x=codigo;}
		if(q>qant){
		    qant=q;
		    y=codigo;
		}
		ttc +=tc;
		ttv += tv;	
 }
		printf("Quantidade de mercadorias que geraram lucro menor que 10%%: %.0f\n", t10);
		printf("Quantidade de mercadorias que geraram lucro maior ou igual a 10%% e menor ou igual a 20%%: %.0f\n", t1020);
		printf("Quantidade de mercadorias que geraram lucro maior do que 20%%: %.0f\n", t20);
		printf("Codigo da mercadoria que gerou maior lucro: %lu\n", x);
		printf("Codigo da mercadoria mais vendida: %lu\n", y);

		LT = ttv-ttc;
		LucroT= LT+ttc;
		LucroT= ((LucroT/ttc)-1)*100;

		printf("Valor total de compras: %.2f, valor total de vendas: %.2f e percentual de lucro total: %.2f%%\n", ttc, ttv, LucroT);	
			
		return 0;
	}