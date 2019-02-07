#include <iostream>
using namespace std;

int main(){
    for (int total=99; total>1; total--){
        cout << endl << total << " bottles of beer on the wall, " << total << " bottles of beer." << endl;
        cout << "Take one down and pass it around, " << total - 1 << " bottles of beer on the wall." << endl;
	}
		cout << endl << "No more bottles of beer on the wall, no more bottles of beer." << endl;
		cout << "Go to the store and buy some more, 99 bottles of beer on the wall." << endl;
	
	return 0;
	
}