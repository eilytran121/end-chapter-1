#include <stdio.h>

void Swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;  
}
 
int main()
{
    int x, y;
    printf("Enter x: ");
    scanf("%d", &x);

    printf("Enter y: ");
    scanf("%d", &y);
    
    
    Swap(&x, &y);
  
    printf("Swap Success!!!x = %d y  = %d ", x,y);
    return 0;
}
