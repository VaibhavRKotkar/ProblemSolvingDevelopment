// clear bit to use ~ and & operator with left shift.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int SetBitX(int num, int i)
{
   int mask = ~(1<<i);
    return (num & (mask));


}
int main()

{
	int num, n,iRet;

	cout << "Enter number\n";

	cin >> num;

	cout << "Enter bit number you wish to clear\n";

	cin >> n;

	iRet = SetBitX(num,n);

	cout << "Answer:" <<iRet<<endl;

}