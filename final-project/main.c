#include<stdio.h>
#include<reg51.h>

                                                                        

void main(void){
	unsigned char sequence = 0x03;
	
	while (1){
		P0 = sequence;
		sequence <<= 1;
		delay_flicker();
	}
}