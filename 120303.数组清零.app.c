#include<stdio.h>
#include<windows.h>
int main()
{
    int a,b;
    int array[20][10]={
    {1,2,3,4,5,6,7,8,9,10},
    {11,12,13,14,15,16,17,18,19,110},
    {21,22,23,24,25,26,27,28,29,210},
    {31,32,33,34,35,36,37,38,39,310},
    {41,42,43,44,45,46,47,48,49,410},
    {51,52,53,54,55,56,57,58,59,510},
    {61,62,63,64,65,66,67,68,69,610},
    {71,72,73,74,75,76,77,78,79,710},
    {81,82,83,84,85,86,87,88,89,810},
    {91,92,93,94,95,96,97,98,99,910},
    {101,102,103,104,105,106,107,108,109,100},
    {541,542,453,544,545,546,547,548,549,510},
    {551,552,553,554,555,556,557,558,559,610},
    {561,562,563,564,565,566,567,568,569,611},
    {571,572,573,574,575,576,577,578,579,910},
    {1571,1572,1573,1574,1575,1576,1577,1578,1579,1910},
    {2571,2572,2573,2574,2575,2576,2577,2578,2579,2910},
    {3571,3572,3573,3574,3575,3576,3577,3578,3579,3910},
    {4571,4572,4573,4574,4575,4576,4577,4578,4579,4910},
    {5581,5582,5583,5584,5585,5586,5587,5588,5589,5810}
    };
    for(a=0;a<20;a++)
    {

    for(b=0;b<10;b++)
    {
        array[a][b]=999;
        printf("%d ",array[a][b]);
    }
    printf("\n");
    }
Sleep(5000);
     for(a=0;a<20;a++)
    {

    for(b=0;b<10;b++)
    {
        array[a][b]=0;
        printf("%d ",array[a][b]);
    }
    printf("\n");
    }
}
