#pragma once


class ISape
{
public:
	ISape();
	~ISape();
public:
	virtual void size() = 0;
	virtual void draw() = 0;
private:

};
