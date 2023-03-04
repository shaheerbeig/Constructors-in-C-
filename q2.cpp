//Create a C++ program to represent class name Event which contains 4 private members
//Event , Event_venue ,Menu ,Cost. Set the values in private members using Parametrize
//constructor?
#include<iostream>
#include<string>
using namespace std;
class Event {
string event, event_venue, menu;
int cost;
public:
Event(string eve, string venue, string men, int amt) {
event = eve;
event_venue = venue;
menu = men;
cost = amt;
}
void display() {
cout << endl;
cout << "***DETAILS***" << endl;
cout << "EVENT::" <<event<< endl;
cout << "EVENT VENUE" << event_venue<< endl;
cout << "MENU::" << menu<<endl;
cout << "COST::" << cost<< endl;
}
};
int main() {
Event details("Procom", "Fast", "Biryani", 150);
details.display();
}