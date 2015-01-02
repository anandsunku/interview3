#include "StdAfx.h"
#include "singlevina1.h"

//static object initialization.
//look there is no static keyword here.
singlevina1* singlevina1::theone=0;

//private constructor 
singlevina1::singlevina1(void)
{
	printf("\n singlevina1 cons called");
}

singlevina1::~singlevina1(void)
{
	printf("\n singlevina1 destroy called");
}

// the only object fetching interface
singlevina1* singlevina1::getInstance()
{
	if(NULL == theone){
		theone = new singlevina1();
	}
	
	return theone;
}

// general functions.
int singlevina1::Add()
{
	printf("\n Add function called");
	return 10;
}