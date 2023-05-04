include<stdio.h>
include<stdlib.h>

struct myarray
{
    int total_size;
    int used_size;
    int*ptr;
}

void createmyarray(sstruct myarray*a , int t_size , int u_size)
{
    a->total_size = t_size;
    a->used_size = u_size;
    a->ptr = (int*)malloc(t_size*sizeof(int));
}

void show(struct myarray*a , int t_size , int u_size)
{
    for(i=0;i< a->u_size;i++)
   { printf("%d\n",(a->ptr)[i]);
   }
}

void setval(struct myarray*a)
{   
     for(i=0;i< a->u_size;i++)
     {
        printf("Enter Elements : %d",i);
        scanf("%d",&n);
        (a->ptr)[i]=n;

     }
}

int main()
{
  cratemyarray(&marks,10,3);
  printf("we are running setval now\n");
  setval(&marks);

}