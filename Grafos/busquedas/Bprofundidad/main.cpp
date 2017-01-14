#include <bits/stdc++.h>
int a[20][20],reach[20],n;//

void dfs(int v) {
  int i;
  reach[v]=1;

  for (i=1;i<=n;i++)
    if(a[v][i] && !reach[i]) {
      printf("\n %d->%d",v,i);
      dfs(i);
    }
}

int main(){

  int i,j,count=0;
  printf("\n Entra el numero de vertices:");
  scanf("%d",&n);

  for (i=1;i<=n;i++) {
    reach[i]=0;
    for (j=1;j<=n;j++)
      a[i][j]=0;
  }
  printf("\nEntra la matriz de adjacencia:\n");

  for (i=1;i<=n;i++)
    for (j=1;j<=n;j++)
      scanf("%d",&a[i][j]);
  printf("\n");

  printf("Vertices en el orden del recorrido:\n");
  dfs(1);

  for (i=1;i<=n;i++) {
    if(reach[i])
    count++;
  }
  printf("\n");

  if(count==n)
    printf("\n El grafo esta conectado");
  else
    printf("\n Elgrafo no esta conectado");

  printf("\n");
  //getch();
}
