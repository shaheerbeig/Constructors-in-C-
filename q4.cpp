//Create class name “_Project” should contains 3 private variables (Requirements, Code,
//deploy)
//Set these variables using constructor and copy constructor.
//Create Object 1 and copy that to Object 2. Print the data member for both Object 1 &amp; 2.
#include<iostream>
#include<string>
using namespace std;
class Project {
string requiremnet, code, deploy;
public:
Project(string req, string cod, string dep) {
requiremnet = req;
code = cod;
deploy = dep;
}
Project(const Project &obj1) {
requiremnet = obj1.requiremnet;
code = obj1.code;
deploy = obj1.deploy;
}
void detailsobj1() {
cout << endl;
cout << "REQUIREMENT::" << requiremnet << endl;
cout << "CODE::" << code << endl;
cout << "DEPLOY::" << deploy << endl;
}
};
int main() {
string req, cod, dep;
cout << "ENTER REQUIREMNET::";
cin >> req;
cout << "ENTER CODE::";
cin >> cod;
cout << "ENTER DEPLOY::";
cin >> dep;
Project obj1(req, cod, dep);
Project obj2(obj1);
cout << "***OBJECT 1 DETAILS***";
obj1.detailsobj1();
cout<<endl;
cout << "***OBJECT 2 DETAILS***";
obj2.detailsobj1();
}