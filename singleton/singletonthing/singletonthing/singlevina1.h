#pragma once

class singlevina1
{
private:
	singlevina1();
	static singlevina1* theone;

public:
	~singlevina1(void);
	static singlevina1* getInstance();

//general functions
public:
	int Add();
};