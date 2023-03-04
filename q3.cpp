//Write a C++ program to find the number and sum of all integer between 100 and 200 which
//are divisible by 9 with constructor.
#include<iostream>
#include<string>
using namespace std;
class addition {
public:
int sum;
addition() {
sum = 0;
}
void value(int a) {
sum = sum + a;
}
void loop(int a) {
for ( int i = a; i < 200; i++) {
if (i % 9 == 0) {
value(i);
cout << i << endl;
}
}
cout << "SUM IS : " <<sum<< endl;
}
};
int main() {
addition b;
b.loop(100);
}