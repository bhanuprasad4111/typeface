
#include <iostream>
using namespace std;
void Terna(int N)
{
    int x;
	if (N == 0)
		return;
	x = N % 3;
	N /= 3;
	if (x < 0)
		N += 1;
	Terna(N);
	if (x < 0)
		cout << x + (3 * -1);
	else
		cout << x;
	
}
void convert(int Dec)
{
		if (Dec != 0) {
		Terna(Dec);
	}
	else
		cout << "0" << endl;
}
int main()
{
	int num;
    cin>>num;
	convert(num);

	return 0;
}
