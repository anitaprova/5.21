#include <iostream>
#include <string>

using namespace std;

string reverse(string str){
	if(str.length() == 0) {
		return "";
	}
	
	return reverse(str.substr(1)) + str.substr(0,1);
}

int main(){
	cout << reverse("flow") << endl;
	
	return 0;
}
