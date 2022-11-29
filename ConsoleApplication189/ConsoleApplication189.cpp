#include <iostream>
#include "Structs.h"

#pragma warning(suppress : 4996)

int main()
{
	Book* arr = nullptr;
	int    n  = 0;

	bool flag = true;
	while (flag)
	{
		system("cls");

		cout << "1. add  book "       << endl;
		cout << "2. show book "       << endl;
		cout << "3. show author name" << endl;
		cout << "4. save book"        << endl;
		cout << "5. exit"             << endl;

		int N; cin >> N;

		switch (N)
		{
			case 1: add_book(arr, n); break;
			case 2:
			{
			system("cls");
			int k = 0;
			cout << "input book number: "; cin >> k;
			show_book(arr[k]);
			system("pause");

			break;
			}
			case 3:
			{
			system("cls");
			int k = 0;
			cout << "input book number: "; cin >> k;
			cout << author_name(arr[k]) << endl;
			system("pause");

			break;
			}
			case 4:
			{
				system("cls");
				int k = 0;
				cout << "input book number: "; cin >> k;
				save_book(arr[k], "G:\\1\\book.txt");
				system("pause");

				break;
			}
			case 5:
			{
				flag = false;
				break;
			}
		}

	}

	clear_arr(arr, n);
}

