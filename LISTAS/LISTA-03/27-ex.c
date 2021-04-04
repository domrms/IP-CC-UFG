int main(){
 
int n, repete1, repete2, teste;
double numeros, ant;
 
scanf("%i", &n);
 
repete1 = n;
 
scanf ("%lf", &ant);
 
while ( repete1 > 1 ){
    scanf("%lf", &numeros);
    if (ant < numeros) teste += 1;
    if (ant > numeros) teste = -999;
    ant = numeros;
    
    if (repete1 <= 2) {
    if (teste > 0) {printf("ORDENADA\n"); teste = 0; ant = 0;}
    else {printf("DESORDENADA\n"); teste = 0; ant = 0;}
    scanf("%i", &repete1); 
    scanf("%lf", &ant);
    continue;}
    
    if (numeros == 0) break;
    repete1--;
}
 
    return 0;
}