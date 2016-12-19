#include <iostream>
#include <string>
#include <cmath>
#include <new>
using namespace std;

void hanoi(int diskSize, int source, int dest, int spare)
{
	if(diskSize==0)
		{cout << "Move disk" <<diskSize << "from peg"<< source << "to peg" << dest<< endl;}
	else
		//move diskSize-1 discs over to the spare
		{hanoi(diskSize-1,source, spare, dest);
	//move the remaining disk onto the destination peg 
	cout << "Move disk" <<diskSize << " from peg" << source << "to peg" <<dest<<endl;
	hanoi(diskSize-1, spare, dest, source);
}}



int main ()
{hanoi (2, 1, 3, 2);
	return 0;}
