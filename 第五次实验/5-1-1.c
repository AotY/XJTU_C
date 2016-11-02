#include <stdio.h>

int main(){

    int x; /*宣告x*/
    int y; /*宣告y*/
    int z; /*宣告z(積)*/
    
    for(x=1 ; x<=9 ; x++){

                     for(y=1 ; y<=9 ; y++){
                     z = x*y;
                     printf("%d*%d=%d ",y,x,z);
            }

                     printf("\n");
        }
  
  // system("PAUSE");    
  return 0;
}