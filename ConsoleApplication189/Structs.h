#pragma once
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

/*
book, в которой описаны следующие данные :
 Название книги;
Автор(фамилия и имя в одной строке);
Год издания;
Кол - во страниц;
Цена за экземпляр.
Задача 3.
*/


struct Book
{
	string name_book;
	string author;
	int    year_publishing;
	int    number_pages;
	double price;
};

void   show_book( const  Book& book);
string author_name(const Book& book);
void   save_book( Book& book, const char* path);
void   add_book(Book*& arr, int n);
void   clear_arr(Book*& arr, int  n);
