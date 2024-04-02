#pragma once
#include "Date.h"
class GoodsC :
    private Date
{
	Date dateNad;
	Date dateOform;
	string name;
	int cost;
	int amount;
	int nomer;
public:
	GoodsC();
	GoodsC(Date, Date, string, int, int, int);
	GoodsC(GoodsC&);
	~GoodsC() { };

	Date getDateNad() const { return dateNad; };
	Date getDateOform() const { return dateOform; };
	string getName() const { return name; };
	int getCost() const { return cost; };
	int getAmount() const { return amount; };
	int getNomer() const { return nomer; };

	void setDateNad(const Date&);
	void setDateOform(const Date&);
	void setName(const string&);
	void setCost(int);
	void setAmount(int);
	void setNomer(int);

	int calc();

	GoodsC operator=(GoodsC t);

	friend istream& operator >> (istream& in, GoodsC& r);
	friend ostream& operator << (ostream& out, const GoodsC& r);

	operator string () const;

	GoodsC& operator ++();
	GoodsC& operator --();
	GoodsC operator ++(int);
	GoodsC operator --(int);
};

