#include <iostream>
using namespace std;
void print(int len, int wth);
void input(int &len, int &wth);
// Do not change the main() function
int main() {
 int len = 10, wth = 5;
 input(len, wth);
 print(len, wth);
 return 0;
}
// Do not change the print() function
void print(int len, int wth) {
 cout << "Length : " << len
 << ", Width : " << wth << endl;
}
//Implement the Input Function here

void input (int &len, int &with){

  cout<<"Enter len";
  cin>>len;
  cout<<"Enter with";
  cin>>with;
}