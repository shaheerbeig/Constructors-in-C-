//Create a C++ program to represent class name as “IMS” which contains the following
//modules.
//Product : This module will contain the following attributes
// Product name
// Description
// Cost
// Bar Code Value
//Category: This module will contain the following attributes
// Category_type
// Product_id
// Stock
// Expiry_date
//Accounts: This module will contain the following attributes
// Amount
// Range
// No_of_transactions
// Date
//All the highlighted attributes are private. Create 3 classes and display all the information of IMS
//using 3 objects. To display data member’s values use only one member function.
#include<iostream>
#include<string>
using namespace std;
//clas 1
class product {
string productname;
int cost;
public:
string description,barcode_value;
product(string desc, string barcode, int value, string name) {
description = desc;
barcode_value = barcode;
cost = value;
productname = name;
}
string getproductname(){
return productname;
}
int getcost() {
return cost;
}
void displaydetails() {
cout << "***PRODUCT DETAILS***"<<endl;
cout << "PRODUCT NAME::" << getproductname() << endl;
cout << "PRODUCT COST::" << getcost() << endl;
cout << "PRODUCT DESCRIPTION::" << description << endl;
cout << "PRODUCT BARCODE VALUE::" << barcode_value << endl;
}
};
//class 2
class category {
int Stock;
public:
string category_type, Product_id, Expiry_date;
category(int quantity, string type, string id, string date) {
Stock = quantity;
category_type = type;
Product_id = id;
Expiry_date = date;
}
int getstock() {
return Stock;
}
void categorydetails() {
cout << endl;
cout << "***CATEGORY DETAILS***" << endl;
cout << "CATEGORY STOCK::" << getstock() << endl;
cout << "CATEGORY TYPE::" << category_type << endl;
cout << "PRODUCT ID ::" << Product_id << endl;
cout << "PRODUCT EXPIRY DATE ::" << Expiry_date << endl;
}
};
//class 3
class accounts {
int No_of_transactions;
public:
int amount, range;
string date;
accounts (int trans, int rang, int amt, string da) {
No_of_transactions = trans;
amount = amt;
range = rang;
date = da;
}
int gettransactions() {
return No_of_transactions;
}
void accountsdetails() {
cout << endl;
//OUTPUT::
cout << "***ACCOUNT DETAILS***" << endl;
cout << "NUMBER OF TRANSACTIONS::" << gettransactions() << endl;
cout << "AMOUNT::" << amount << endl;
cout << "RANGE::" << range << endl;
cout << "DATE::" << date << endl;
}
};
int main() {
product detail1("fragile","019043751763",450000,"OMECA GLASS");
category detail2(5, "metal", "22k-4321", "22 jan 2003");
accounts detail3(5, 50000, 90000, "4 january 2023");
detail1.displaydetails();
detail2.categorydetails();
detail3.accountsdetails();
}