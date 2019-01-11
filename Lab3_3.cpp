#include <iostream>
using namespace std;
int main(){
	float x=2, y=0;
	while ( x <= 69 ){
		y = (1/x)+y;
		x = x+1;
	} cout<< y;
	return 0;
}