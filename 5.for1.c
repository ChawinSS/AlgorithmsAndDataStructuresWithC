/*1,2,3,_,5,6,7,_,9,10,11,_,13,14,15,_,17,18,19,_*/
#include<stdio.h>
int main()
{
for ( int i = 1; i <= 20; i++ )
{
    if ( i % 4 != 0 )
    {
        printf( "%d ", i );
    }
}
}