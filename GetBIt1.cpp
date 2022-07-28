// Get bit at nth position use AND operator with left shift operator(count start from 0)
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int GetBitX(int num, int i)
{
    return ((num & (1 << i))!=0);   // left shift
   // return (1 & (num >> (i - 1)));  // right shift

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