#include<iostream>
#include<windows.h>          
using namespace std;

string inventory[10];
void Fishing();

int main() {

char input = 'a';
int room = 1;

while (input != 'q') {
cout << "your inventory:" << endl;
for (int i = 0; i < 10; i++)
cout << inventory[i] << " ";
cout << endl;

switch (room) {
case 1:
cout << "Press F to fish" << endl;
cin >> input;
if (input == 'F' || input == 'f') {
Sleep(5);
Fishing();
}
break;


}
}
}
