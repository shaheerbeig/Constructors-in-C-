//Write a program to perform class to basic conversion [Ex: Class is: Triangle with data
//members base and height(float), and basic type is float(area of triangle)]
#include<iostream>
#include<string>
using namespace std;
class traingle {
private:
float base, height;
public:
traingle(float a, float h) {
base = a;
height = h;
}
float area;
float calculatearea(float base, float height) {
area = (0.5) * base * height;
return area;
}
void display() {
cout << "***********************" << endl;
cout << "AREA IS:" << calculatearea(base, height)<<endl;
cout << "*************************" << endl;
}
};
int main() {
traingle a(10, 25);
a.display();
}