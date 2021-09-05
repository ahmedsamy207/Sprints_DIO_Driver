/*
 * register.h
 *
 * Created: 05/04/2020 11:47:31 م
 *  Author: Ahmed SemSem
 */ 


#ifndef REGISTER_H_
#define REGISTER_H_
//=============================== GPIO REGISTER ===================================
	/* PORT A */
	#define myPORTA		*((volatile unsigned char* const)0x3B)
	#define myDDRA		*((volatile unsigned char* const)0x3A)
	#define myPINA		*((volatile unsigned char* const)0x39)
	
	/* PORT B */
	#define myPORTB		*((volatile unsigned char* const)0x38)
	#define myDDRB		*((volatile unsigned char* const)0x37)
	#define myPINB		*((volatile unsigned char* const)0x36)
	
	/* PORT C */
	#define myPORTC		*((volatile unsigned char* const)0x35)
	#define myDDRC		*((volatile unsigned char* const)0x34)
	#define myPINC		*((volatile unsigned char* const)0x33)
	
	/* PORT D */
	#define myPORTD		*((volatile unsigned char* const)0x32)
	#define myDDRD		*((volatile unsigned char* const)0x31)
	#define myPIND		*((volatile unsigned char* const)0x30)
//================================================================================	
/* Timer 1 */
#define mySFIOR  *((volatile unsigned char* const)0X50)
#define PUD     2

#endif /* REGISTER_H_ */