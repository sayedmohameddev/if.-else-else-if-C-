/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
int marks ;
cout<<"enter your marks \n";
cin>>marks;
if ( marks>=90 && marks <=100)
cout<<"you got a \n";
else if (marks >=80 && marks <90)
cout<<"you got b \n";
else if(marks >=70 && marks <80)
cout<<"you got c \n";
else if (marks >=60 && marks<70)
cout<<"you got d \n";
else
cout<<"you got f \n";
    return 0;
}
