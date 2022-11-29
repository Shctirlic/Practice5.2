#include "Structs.h"

void   show_book(const  Book& book)
{
	cout << book.author << endl;
	cout << book.name_book << endl;
	cout << book.number_pages << endl;
	cout << book.price << endl;
	cout << book.year_publishing << endl;
}

string author_name(const Book& book)
{
	/*
		string str;
	int   pos = book.author.find(' ');
	return book.author.substr(pos + 1);
	*/
	return book.author;
}

void   save_book(Book& book, const char* path)
{
	ofstream out(path);

	out << book.author << endl;
	out << book.name_book << endl;
	out << book.number_pages << endl;
	out << book.price << endl;
	out << book.year_publishing << endl;

	out.close();
}

void   add_book(Book*& arr, int n)
{
	Book* temp_arr = new Book[n + 1];

	for (int i = 0; i < n; i++)
	{
		temp_arr[i] = arr[i];
	}

	system("cls");

	cout << "intput author: " << endl; cin >> temp_arr[n].author;
	cout << "intput name_book: " << endl; cin >> temp_arr[n].name_book;
	cout << "intput number_pages: " << endl; cin >> temp_arr[n].number_pages;
	cout << "intput price: " << endl; cin >> temp_arr[n].price;
	cout << "intput year_publishing: " << endl; cin >> temp_arr[n].year_publishing;

	cout << "book added ..... OK" << endl;
	system("pause");


	delete[] arr;

	arr = temp_arr;
}

void   clear_arr(Book*& arr, int  n)
{
	delete[] arr;
}