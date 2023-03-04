//Write C++ program to display the diamond-like pattern using the Constructor.
#include <iostream>
using namespace std;
class Pattern {
 int size;
 public:
 Pattern(int s) {
 size = s;
 }
 void display() {
 int i, j, k;
 for (i = 1; i <= size; i++) {
 for (j = 1; j <= size - i; j++) {
 cout << " ";
 }
 for (k = 1; k <= 2 * i - 1; k++) {
 cout << "*";
 }
 cout << endl;
 }
 for (i = size - 1; i >= 1; i--) {
 for (j = 1; j <= size - i; j++) {
 cout << " ";
 }
 for (k = 1; k <= 2 * i - 1; k++) {
 cout << "*";
 }
 cout << endl;
 }
 }
};
int main() {
 Pattern dp(5);
 dp.display();
 return 0;
}