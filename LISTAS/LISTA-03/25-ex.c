#include <stdio.h>

int main() {
    int m;     
    int n, i;
    int ini;

  scanf("%d", &m);

  ini = 1;
  for (n = 1; n <= m; n++){
    printf("%d*%d*%d = %d", n, n, n, ini);
    for (i = 1; i < n; i++)
    printf("+%d", ini + 2 * i);
    printf("\n");
    ini = ini + 2 * n;           
  }

  return 0;
}