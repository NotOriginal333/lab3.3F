#include "GoodsC.h"

#include <iostream>

GoodsC::GoodsC() {
    name = "";
    cost = 0;
    amount = 0;
    nomer = 0;
}

GoodsC::GoodsC(GoodsC& t) {
    dateNad = t.dateNad;
    dateOform = t.dateOform;
    name = t.name;
    cost = t.cost;
    amount = t.amount;
    nomer = t.nomer;
}

GoodsC::GoodsC(Date nad, Date oform, std::string n, int c, int a, int nom) {
    dateNad = nad;
    dateOform = oform;
    name = n;
    cost = c;
    amount = a;
    nomer = nom;
}

void GoodsC::setDateNad(const Date& t) {
    dateNad.setYear(t.getYear());
    dateNad.setMonth(t.getMonth());
    dateNad.setDay(t.getDay());
}

void GoodsC::setDateOform(const Date& t) {
    dateOform.setYear(t.getYear());
    dateOform.setMonth(t.getMonth());
    dateOform.setDay(t.getDay());
}

void GoodsC::setName(const std::string& n) {
    name = n;
}

void GoodsC::setCost(int c) {
    cost = c;
}

void GoodsC::setAmount(int a) {
    amount = a;
}

void GoodsC::setNomer(int nom) {
    nomer = nom;
}

int GoodsC::calc() {
    return cost * amount;
}

GoodsC::operator string () const {
    return "Name: " + name + ", Cost: " + std::to_string(cost) + ", Amount: " + std::to_string(amount) +
        ", Nomer: " + std::to_string(nomer);
}

GoodsC GoodsC::operator=(GoodsC t) {
    dateNad = t.dateNad;
    dateOform = t.dateOform;
    name = t.name;
    cost = t.cost;
    amount = t.amount;
    nomer = t.nomer;
    return *this;
}

istream& operator >> (istream& in, GoodsC& r) {
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

ostream& operator << (ostream& out, const GoodsC& r) {
    out << string(r);
    return out;
}

GoodsC& GoodsC::operator ++() {
    cost++;
    return *this;
}

GoodsC& GoodsC::operator --() {
    cost--;
    return *this;
}

GoodsC GoodsC::operator ++(int) {
    GoodsC n(*this);
    amount++;
    return n;
}

GoodsC GoodsC::operator --(int) {
    GoodsC n(*this);
    amount--;
    return n;
}