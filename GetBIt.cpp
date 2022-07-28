// Get bit at nth position use AND operator with right shift operator(count start from 1)
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int GetBitX(int num, int i)
{
    return (1 &(num >> (i - 1)));

}
int main()

{
	int num, n,iRet;

	cout << "Enter number\n";

	cin >> num;

	cout << "Enter bit number you wish to obtain\n";

	cin >> n;

	iRet = GetBitX(num,n);

	cout << "Answer:" <<iRet<<endl;

}