// set bit to 1 use OR operator with left shift
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int SetBitX(int num, int i)
{
    return (num | (1<< i));


}
int main()

{
	int num, n,iRet;

	cout << "Enter number\n";

	cin >> num;

	cout << "Enter bit number you wish to set to 1\n";

	cin >> n;

	iRet = SetBitX(num,n);

	cout << "Answer:" <<iRet<<endl;

}