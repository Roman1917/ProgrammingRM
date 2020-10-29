#pragma once
#ifndef Lab3V_h
#define Lab3V_h

class Pro {
protected:
	int x;
public:
	Pro(int);
	virtual ~Pro();
	virtual int get() const;
};

class Pro7 : public Pro {
protected:
	int div1;
public:
	Pro7(int);
	int get() const override;
};

class Pro5 : public Pro7 {
protected:
	int div2;
public:
	Pro5(int);
	int get() const override;
};
#endif
