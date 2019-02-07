#include <iostream>
using namespace std;

int main(){
    int total = 99;
    while (total <= 99){
        cout << endl << total << " bottles of beer on the wall, " << total << " bottles of beer." << endl;
        total = total - 1;
        cout << "Take one down and pass it around, " << total << " bottles of beer on the wall." << endl;
		if (total == 0){
			cout << endl << "No more bottles of beer on the wall, no more bottles of beer." << endl;
			cout << "Go to the store and buy some more, 99 bottles of beer on the wall." << endl;
			break;
		}
    }
	
	return 0;
	
}