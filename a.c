/*****
 * ƒRƒƒ“ƒg’Ç‰Á 
 * (SJIS)
 */
#include <stdio.h>

void main(void)
{
	int i=0;
	int j=0;
	while(1){
		if(i==20){
			j++;
			if(j>10){
				break;
			}
			
		}
		i++;
		i%=30;
	}
	printf("i:%d,j:%d\r\n",i,j);
}
