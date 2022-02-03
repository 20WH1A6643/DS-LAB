#include<stdio.h>
#include<conio.h>
int a[20][20],q[20],visited[20],n,i,j,f=0,r=-1;
void bfs(int v) {
for (i=1;i<=n;i++)
 if(a[v][i] && !visited[i])
{
printf("\n %d->%d",v,i);
  q[++r]=i;
}
if(f<=r)
{
visited[q[f]]=1;
bfs(q[f++]);
}
}
void main() {
int v;
printf("\n Enter the number of vertices:");
scanf("%d",&n);
for (i=1;i<=n;i++) {
q[i]=0;
visited[i]=0;
}
printf("\n Enter graph data in matrix form:\n");
for (i=1;i<=n;i++)
 for (j=1;j<=n;j++)
  scanf("%d",&a[i][j]);
printf("\n Enter the starting vertex:");
scanf("%d",&v);
bfs(v);


}
Output:
 Enter the number of vertices:5
 Enter graph data in matrix form:
0 1 1 1 0
1 0 0 0 1
1 0 0 0 1
1 0 0 0 1
0 1 1 1 0

 Enter the starting vertex:2

 2->1
 2->5
 1->2
 1->3
 1->4
 5->2
 5->3
 5->4
#include<stdio.h>
#include<conio.h>
int a[20][20],reach[20],n;
void dfs(int v) {
int i;
reach[v]=1;
for (i=1;i<=n;i++)
 if(a[v][i] && !reach[i]) {
printf("\n %d->%d",v,i);
dfs(i);
}
}
void main() {
int i,j,count=0;
    printf("\n Enter number of vertices:");
scanf("%d",&n);
for (i=1;i<=n;i++) {
reach[i]=0;
for (j=1;j<=n;j++)
  a[i][j]=0;
}
printf("\n Enter the adjacency matrix:\n");
for (i=1;i<=n;i++)
 for (j=1;j<=n;j++)
  scanf("%d",&a[i][j]);
dfs(1);
printf("\n");

}
Output:
 Enter number of vertices:5
 Enter the adjacency matrix:
0 1 1 1 0
1 0 0 0 1
1 0 0 0 1
1 0 0 0 1
0 1 1 1 0

 1->2
 2->5
 5->3
 5->4
