// Update bit means clear bit and set bit
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int SetBitX(int num, int i)
{
   int mask = (num & (~(1<<i)));

    return (mask | (1<<i));


}
int main()

{
	int num, n,iRet;

	cout << "Enter number\n";

	cin >> num;

	cout << "Enter bit number you wish to update\n";

	cin >> n;

	iRet = SetBitX(num,n);

	cout << "Answer:" <<iRet<<endl;

}