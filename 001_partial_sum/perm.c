#include <stdio.h>
#include <stdlib.h>

extern void showperm(int p[], int n); /* このルーチンで各順列に対する処理を行う */
void genperm1(int p[], int n);  /* 高速順列生成ルーチン，辞書式順序ではない */
void genperm2(int p[], int n);  /* 辞書式順序の順列生成ルーチン */
void put(int p[], int pos, int k);

void genperm1(int p[], int n)
{
  int *c, *pc, *q;
  int k, t;

  c = (int *)malloc(sizeof(int) * n);
    if(c == NULL)
    {
      fprintf(stderr, "Error : out of memory  in genperm1()\n");
      exit(-1);
    }

    for(k = 1, q = p, pc = c; k <= n; ) *q++ = *pc++ = k++;
    k = 1;
    pc = c;
    do
    {
      t = *(p + k);
      *(p + k) = *(q = p + ((k & 1)? *pc: 0));
      *q = t;
/*      showperm(p, n);*/
      k = 1;
      pc = c;
      while(*pc == 0) *pc++ = k++;
      (*pc)--;
    } while(k < n);
    free((char *)c);
}

int nn;
int *ok;

void genperm2(int p[], int n)
{
  int k;

  ok = (int *)malloc(sizeof(int) * (n + 1));
    if(ok == NULL)
    {
      fprintf(stderr, "Error : out of memory  in genperm2()\n");
      exit(-1);
    }
    nn = n;
    for(k = 1; k <= n; k++) *(ok + k) = 1;
    for(k = 1; k <= n; k++)  put(p, 0, k);
    free((char *)ok);
}

void put(int p[], int pos, int k)
{
  int j;

  *(p + pos) = k;
  if(pos == nn - 1) 
  {
/*    showperm(p, nn);*/
  }
  else
  {
    *(ok + k) = 0;
    for(j = 1; j <= nn; j++)  if(*(ok + j)) put(p, pos + 1, j);
    *(ok + k) = 1;
  }
}

int main(void)
{
  int[] a;
  a = {1, 2, 3};
  genperm2(array, 3);
  return 0;
}

