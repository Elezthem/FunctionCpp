#include <iostream>
#include <string>

using namespace std;

/*void cmdprint(string gg) {
	cout << gg << endl;
}
*/

int addplus(int a, int b);
int addplus2(int a, int b);

int main() {
	setlocale(LC_ALL, "RU");
	
	/*cmdprint("Hey");
	string word = "Everyone";
	cmdprint(word);
	cmdprint("!");
	*/

	int res = addplus(10, 10);
	int res2 = addplus2(40, 1);
	if (res > res2)
		cout << res;
	else
		cout << res2;

	return 0;
}

int addplus(int a, int b) {
	return a + b;
}

int addplus2(int a, int b) {
	return a + b;
}