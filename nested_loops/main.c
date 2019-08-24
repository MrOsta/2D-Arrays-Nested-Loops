#include <stdio.h>
#include <stdlib.h>

int main()
{
int numbers[3][3]  = {

 {1 , 2 , 3},
 {4 , 5 , 6},
{7 , 8 , 9}


};

int x , i;

for (x = 0; x < 3; x++ ){
for (i = 0;  i < 3; i++ ){
printf("%d\n",numbers[x][i]);
}
}
    return 0;
}
