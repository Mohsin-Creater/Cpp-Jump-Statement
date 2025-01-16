#include <iostream>
using namespace std;

int main() {
	int count =1;
	loop:
		if (count>5)
	goto end;
	cout<<"count:"<<count<<endl;
	count++;
	goto loop;
	end:
		cout<<"End Of Loop." << endl;
		return 0;
}
