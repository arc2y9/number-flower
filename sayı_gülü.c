#include <stdio.h>

int main()
{
    int range;
    scanf("%d",&range);
 	int Rrange = (2*range) - 1;
 	int mt[Rrange][Rrange];
 	for(int i = 0; i < Rrange;i++){
        	for(int j = 0; j < Rrange; j++){
        		mt[i][j]=range+1;
			}
		}
    for(int u = 0; u < Rrange;u++)
    {
        for(int i = u; i < Rrange-u;i++){
        	for(int j = u; j < Rrange-u; j++){
        		mt[i][j]--;
			}
		}
    }
    for(int i = 0; i < Rrange; i++){
	        for(int j = 0; j < Rrange; j++){
	           printf("%d ",mt[i][j]);
	        }
	       printf("\n");
	   }
    return 0;
}
