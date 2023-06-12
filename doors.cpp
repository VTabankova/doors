#include <iostream>
#include <math.h>
using namespace std;
int counter(int mas[]);
void functoin(int masdoor[]);
int main()
{
	int masdoor[100];
	for (int i = 0; i < 100; i++)
	{
		masdoor[i] = i + 1;
	}

	functoin(masdoor);
	return 0;
}

int counter(int  masdoor[])
{
	int num = 0;
	for (int i = 0; i < 100; i++)
	{
		if (sqrt(masdoor[i]) == int(sqrt(masdoor[i])))
		{
			num++;
		}
	}
	return num;
}

void functoin(int masdoor[])
{
	int* masopendoor = new int[counter(masdoor)];
	int temp = 0;

	for (int i = 0; i < 100; i++)
	{
		if (sqrt(masdoor[i]) == int(sqrt(masdoor[i])))
		{
			masopendoor[temp] = masdoor[i];
			temp++;
		}
	}

	for (int i = 0; i < counter(masdoor); i++)
	{
		cout << masopendoor[i] << " ";
	}
}