#include<iostream>
using namespace std;

int main(){
int a = 5;
char b = 'A';
char &c = b;
int *x = &a;
char *y = &b;
int **z = &x;
char **d = &y;
int ***e = &z;
cout << a << " " << b << " " << c << " " << x << " " << (void *) y << " " << z << "\n"; 
cout << x << " " << (void *) y << " " << (void *) y << " " << z << " " << d << " " << e << "\n";	
c = 'F';
cout << a << " " << b << " " << c << " " << x << " " << (void *) y << " " << z << "\n";
*y = 'W';
cout << a << " " << b << " " << c << " " << x << " " << (void *) y << " " << z << "\n";
*x = 6;
cout << a << " " << b << " " << c << " " << x << " " << (void *) y << " " << z << "\n";
**z = 7;
cout << a << " " << b << " " << c << " " << x << " " << (void *) y << " " << z << "\n";
	return 0;
}
