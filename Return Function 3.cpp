#include <iostream>
using namespace std;

int checking (int num) {
	if (num%2==0)
	return 1;
	else
	return 0;
}
int main () {
	int num = 6;
	if (checking(num))
	cout<<num<<"is even."<<endl;
	else
	cout<<num<<"is odd."<<endl;
	return 0;
}