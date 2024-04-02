#pragma once
#include "Date.h"
class GoodsO :
    public Date
{
	Date dateNad;
	Date dateOform;
	string name;
	int cost;
	int amount;
	int nomer;
public:
	GoodsO();
	GoodsO(Date, Date, string, int, int, int);
	GoodsO(GoodsO&);
	~GoodsO() { };

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

	GoodsO operator=(GoodsO t);

	friend istream& operator >> (istream& in, GoodsO& r);
	friend ostream& operator << (ostream& out, const GoodsO& r);

	operator string () const;

	GoodsO& operator ++();
	GoodsO& operator --();
	GoodsO operator ++(int);
	GoodsO operator --(int);
};

