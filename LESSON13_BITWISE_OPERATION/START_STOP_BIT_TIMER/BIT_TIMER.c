//start and stop different Timer based on bit operation
//Jaydeep Shah <radhey04ec@gmail.com>

#include<stdio.h>
#include<stdint.h>


// 8-bit register: each bit controls the START/STOP state of a different timer.
// Bit value 1 ? START the timer
// Bit value 0 ? STOP the timer

#define TIMER0_LOCATION 			0U
#define TIMER1_LOCATION 			1U
#define TIMER2_LOCATION 			2U
#define TIMER3_LOCATION 			3U
#define TIMER4_LOCATION 			4U
#define TIMER5_LOCATION 			5U
#define TIMER6_LOCATION 			6U
#define TIMER7_LOCATION 			7U

uint8_t TIMER_REG					= 0U;


//-------------------------------------------------------------------------------------------------
//Print Binary value
void print_BIN(uint8_t x)
{
	if(x > 254)
	{
		return;
	} 
	int LOCATION = 0;
	for(LOCATION = 7;LOCATION >=0; LOCATION--)
	{
		(x & (1<<LOCATION)) ? (printf("1")) : (printf("0"));
	}
}

//-------------------------------------------------------------------------------------------------


int main()
{
	printf("Initial value of 8 BIT TIMER = %d , BIN = ",TIMER_REG);
	print_BIN(TIMER_REG);
	//SET Default value - TIMER 3 and 5 as ON
	TIMER_REG	= TIMER_REG | (1 << TIMER3_LOCATION) | (1 << TIMER5_LOCATION);
	printf("\nDefault Value of 8 BIT TIMER = %d , BIN = ",TIMER_REG);
	print_BIN(TIMER_REG);
	
	//LETS START TIMER 0 and TIMER 1
	TIMER_REG	= TIMER_REG | (1 << TIMER0_LOCATION) | (1 << TIMER1_LOCATION);
	//STOP TIMER 3 and TIMER 5
	TIMER_REG	= TIMER_REG & (~(1 << TIMER3_LOCATION)) & (~(1 << TIMER5_LOCATION));
	printf("\nNEW Value of 8 BIT TIMER = %d , BIN = ",TIMER_REG);
	print_BIN(TIMER_REG);
	
	
	return 0;
}
