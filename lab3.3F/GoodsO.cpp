#include "GoodsO.h"

#include <iostream>

GoodsO::GoodsO() {
    name = "";
    cost = 0;
    amount = 0;
    nomer = 0;
}

GoodsO::GoodsO(GoodsO& t) {
    dateNad = t.dateNad;
    dateOform = t.dateOform;
    name = t.name;
    cost = t.cost;
    amount = t.amount;
    nomer = t.nomer;
}

GoodsO::GoodsO(Date nad, Date oform, std::string n, int c, int a, int nom) {
    dateNad = nad;
    dateOform = oform;
    name = n;
    cost = c;
    amount = a;
    nomer = nom;
}

void GoodsO::setDateNad(const Date& t) {
    dateNad.setYear(t.getYear());
    dateNad.setMonth(t.getMonth());
    dateNad.setDay(t.getDay());
}

void GoodsO::setDateOform(const Date& t) {
    dateOform.setYear(t.getYear());
    dateOform.setMonth(t.getMonth());
    dateOform.setDay(t.getDay());
}

void GoodsO::setName(const std::string& n) {
    name = n;
}

void GoodsO::setCost(int c) {
    cost = c;
}

void GoodsO::setAmount(int a) {
    amount = a;
}

void GoodsO::setNomer(int nom) {
    nomer = nom;
}

int GoodsO::calc() {
    return cost * amount;
}

GoodsO::operator string () const {
    return "Name: " + name + ", Cost: " + std::to_string(cost) + ", Amount: " + std::to_string(amount) +
        ", Nomer: " + std::to_string(nomer);
}

GoodsO GoodsO::operator=(GoodsO t) {
    dateNad = t.dateNad;
    dateOform = t.dateOform;
    name = t.name;
    cost = t.cost;
    amount = t.amount;
    nomer = t.nomer;
    return *this;
}

istream& operator >> (istream& in, GoodsO& r) {
    std::cout << "Enter name: ";
    in >> r.name;
    std::cout << "Enter cost: ";
    in >> r.cost;
    std::cout << "Enter amount: ";
    in >> r.amount;
    std::cout << "Enter nomer: ";
    in >> r.nomer;
    std::cout << "Enter dateNad: ";
    in >> r.dateNad;
    std::cout << "Enter dateOform: ";
    in >> r.dateOform;
    return in;
}

ostream& operator << (ostream& out, const GoodsO& r) {
    out << string(r);
    return out;
}

GoodsO& GoodsO::operator ++() {
    cost++;
    return *this;
}

GoodsO& GoodsO::operator --() {
    cost--;
    return *this;
}

GoodsO GoodsO::operator ++(int) {
    GoodsO n(*this);
    amount++;
    return n;
}

GoodsO GoodsO::operator --(int) {
    GoodsO n(*this);
    amount--;
    return n;
}