/*
#include <iostream>
#include<iomanip>
using namespace std;

int main() {
 float marks[] = { 78.4, 90.6, 45.9, 72.2, 54.4 };
 char names[][20] = { "Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha" };
  
 cout << setw(5) << "No" << setw(15) << "Name" << setw(10) << "Marks" << endl;

 for (int r = 0; r < 5; r++) {
  cout << setw(5) << r + 1
    << setw(15) << names[r]
    << setw(10) << setiosflags(ios::fixed) << setprecision(2) << marks[r] << endl;
 }
 return 0;
}

*/

/*
#include <iostream>
using namespace std;

int volume(int height, int width, int length);

int main() {
 int box1Height, box1Width, box1Length;
 int box2Height, box2Width, box2Length;
 int totalVolume, totalSurface;

 cout << "Enter Box 1 Height : ";
 cin >> box1Height;
 cout << "Enter Box 1 Width : ";
 cin >> box1Width;
 cout << "Enter Box 1 Length : ";
 cin >> box1Length;

 cout << "Enter Box 2 Height : ";
 cin >> box2Height;
 cout << "Enter Box 2 Width : ";
 cin >> box2Width;
 cout << "Enter Box 2 Length : ";
 cin >> box2Length;

 totalVolume = volume(box1Height, box1Width, box1Length)
 + volume(box2Height, box2Width, box2Length);

 cout << "Volume of Box is " << totalVolume << endl;

 return 0;
}

int volume(int height, int width, int length) {

  return height * width * length;
}

// Implement the Volume() function here

*/


/*
#include <iostream>
using namespace std;

struct Box {
 int width,Height,length;

}box1,box2;

int volume(int height, int width, int length);
// 1. Define a structure called Box
// have the integer data types Height, Width, Length
// Do not change the main function
int main() {
   struct  Box box1,box2;
 
 // 2. Create a variable called box1 of the Box structure type
 // int box1Height, box1Width, box1Length;
 // 3. Create a variable called box2 of the Box structure type

 // int box2Height, box2Width, box2Length;
 int totalVolume;

 // 4. Input the height, width, lenght of box1 and box2
 cout << "Enter Box 1 Height : ";
 cin >> box1.Height;
 cout << "Enter Box 1 Width : ";
 cin >> box1.width;
 cout << "Enter Box 1 Length : ";
 cin >> box1.length;

cout << "\n";

 cout << "Enter Box 2 Height : ";
 cin >> box2.Height;
 cout << "Enter Box 2 Width : ";
 cin >> box2.width;
 cout << "Enter Box 2 Length : ";
 cin >> box2.length;

 // 5. Replace the coding below to pass the Box type structure
 totalVolume = volume( box1.Height,box1.width,box1.length)
 + volume( box2.Height,box2.width,box2.length);

 cout << "\n";
 cout << "Volume of Box is : " << totalVolume << endl;

 return 0;
}

int volume(int height, int width, int length) {
 int total;

  total=height*width*length;
return  total;

}

*/

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