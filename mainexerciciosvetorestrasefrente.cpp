#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int v[5];
	
	for (int i=0; i < 5; i++){
	cout << "digite o numero " << i << endl;
	cin >> v[i];
}

for (int i = 4; i >= 0; i--){
	cout << v[i] << "|";
}
	
	
	
	
	
	return 0;
}
