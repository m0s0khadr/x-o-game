#include <iostream>

using namespace std;

int main()
{
	// array of numbers;
	char arr[9] = { '1','2','3','4','5','6','7','8','9' };


	//prit the array like x/o bord
	for (int i = 1; i <= 9; i++)
	{
		if (i % 3 == 0)
		{
			cout << arr[i - 1] << "\n\n";
		}
		else
		{
			cout << arr[i - 1] << "\t";
		}
	}
	// var x and var o;
	char x, o;
	bool bol = true;
	while (bol)
	{
		cout << "x tern:";
		cin >> x;
		for (int i = 0; i < 9; i++)
		{
			if (arr[i] == x) {
				arr[i] = 'x';
			}

		}


		for (int i = 1; i <= 9; i++)
		{
			if (i % 3 == 0)
			{
				cout << arr[i - 1] << "\n\n";
			}
			else
			{
				cout << arr[i - 1] << "\t";
			}
		}


		cout << "o tern:";
		cin >> o;
		for (int i = 0; i < 9; i++)
		{
			if (arr[i] == o) {
				arr[i] = 'o';
			}

		}


		for (int i = 1; i <= 9; i++)
		{
			if (i % 3 == 0)
			{
				cout << arr[i - 1] << "\n\n";
			}
			else
			{
				cout << arr[i - 1] << "\t";
			}
		}


		if (arr[0] == arr[1] && arr[0] == arr[2])
		{
			cout << arr[0] << " win.\n";
			bol = false;
			break;
		}

		if (arr[3] == arr[4] && arr[3] == arr[5])
		{
			cout << arr[3] << " win.\n";
			bol = false;
			break;
		}

		if (arr[6] == arr[7] && arr[6] == arr[8])
		{
			cout << arr[6] << " win.\n";
			bol = false;
			break;
		}
		if (arr[2] == arr[5] && arr[2] == arr[8])
		{
			cout << arr[2] << " win.\n";
			bol = false;
			break;
		}
		if (arr[1] == arr[4] && arr[1] == arr[7])
		{
			cout << arr[1] << " win.\n";
			bol = false;
			break;
		}
		if (arr[0] == arr[3] && arr[0] == arr[6])
		{
			cout << arr[0] << " win.\n";
			bol = false;
			break;
		}
	}

}