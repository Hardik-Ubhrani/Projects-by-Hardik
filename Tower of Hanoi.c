#include <stdio.h>
void hardik_hanoi_10566(int,int,int);
int disp(int,int);
void main()
{
    int ring,start,end;
    printf("Enter number of rings");
    scanf("%d",&ring);
    printf("Enter starting rod");
    scanf("%d",&start);
    printf("Enter destination rod");
    scanf("%d",&end);
    hardik_hanoi_10566(ring,start,end);
}


void hardik_hanoi_10566(int ring,int start,int end)
//ring: defines number of rings, start:defines the starting rod,end:defines the end rod
{
    if (ring == 1)
     disp(start,end);
    else {
        int other=6-start-end;
        hardik_hanoi_10566(ring-1,start,other);
        disp(start,end);
        hardik_hanoi_10566(ring-1,other,end);
    }


}
int disp(int frm,int to)
{
    printf("%d --> %d\n",frm,to);
}
