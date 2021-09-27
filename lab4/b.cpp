// Solution
#include <algorithm>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <set>
#include <map>
using namespace std;
struct node
{
int size,x;
node *l, *r;
node (int key)
{
x=key;
size=1;
l=r=0;
}
};
typedef node* pnode;
int x;
int size(pnode t)
{
return t ? t->size : 0;
}
void update(pnode &t)
{
t->size=size(t->l)+size(t->r)+1;
}
int find(pnode t, int x)
{
if (t==0) return 0;
if (t->x == x) return 1;
if (t->x > x) return find(t->l, x);
return find(t->r, x);
}
void add(pnode &t,int x)
{
if (t==0) t=new node(x);
else
if (t->x > x) add(t->l, x);
else
add(t->r, x);
update(t);
}
int main()
{
freopen( "input.txt","r",stdin );
freopen( "output.txt","w",stdout );
pnode t=0;
while (1)
{
scanf("%d",&x);
if (!x) break;
if (! find(t, x))
add(t, x);
}
printf("%d",size(t));
return 0;
}
