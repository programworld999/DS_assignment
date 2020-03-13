#include<stdio.h>
#include<conio.h>

void quicksort(int x[],int lb,int ub)
{int j;
 if(lb>=ub)
  return;
 j=partition(x,lb,ub);
 quicksort(x,lb,j-1);
 quicksort(x,j+1,ub);
}

int partition(int x[],int lb,int ub)
{int a,down,up,t;
 a=x[lb];
 down=lb;up=ub;
 while(down<up)
 {while(x[down]<=a && down<=up)
    down++;
  while(x[up]>a)
    up--;
  if(down<up)
  {t=x[down];
   x[down]=x[up];
   x[up]=t;
  }
 }
 x[lb]=x[up];
 x[up]=a;
 return up;
}

void main()
{int a[20],i,n;
 printf("\nEnter how many elements:");
 scanf("%d",&n);
 printf("\nEnter the elements:\n");
 for(i=0;i<n;i++)
 {printf("a[%d]:",i);
  scanf("%d",&a[i]);
 }
 quicksort(a,0,n-1);
 printf("\nSorted array is:");
 for(i=0;i<n;i++)
  printf("\t%d",a[i]);
 getch();
}