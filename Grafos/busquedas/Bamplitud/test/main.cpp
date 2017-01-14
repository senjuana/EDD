#include <bits/stdc++.h>
int a[20][20],q[20],visited[20],n,i,j,f=0,r=-1;   //variables globales

using namespace std;
void bfs(int v) {   //algoritmo de busqueda en amplitud
  for (i=1;i<=n;i++)
    if(a[v][i] && !visited[i])
      q[++r]=i;
  if(f<=r) {
    visited[q[f]]=1;
    bfs(q[f++]);
  }
}

int main() {
  int v;

  cout<<"\n Entra el numero de nodos en el grafo: ";
  cin>> n;

  for (i=1;i<=n;i++) {
    q[i]=0;
    visited[i]=0;
  }
  cout<<"\n  Entra los datos del grafo en forma de matriz de adjacencia:\n";

  for (i=1;i<=n;i++)
    for (j=1;j<=n;j++)
      scanf("%d",&a[i][j]);
  printf("\n Entra en nodo de inicio:");
  scanf("%d",&v);
  bfs(v);
  printf("\n Los nodos que son alcanzables son :\n\n");
  for (i=1;i<=n;i++)
    if(visited[i])
      printf("%d\t",i);
  printf("\n\n") ;
}
