#include <iostream>
#include <vector>

using namespace std;

int main(){
	cout << "Enter number of towns" << endl;
	int n;
	cin >> n;
//    vector<int> route(n);
	vector< vector<int> > travel_plan(n, vector<int> (n));
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			cout << travel_plan[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Hello, world!" << endl;
	return 0;
}
