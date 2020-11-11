#include "Lab4.h"
DB::DB(const char* q)
	: col(0), sorted(0)
{
	strcpy(title, q);
}

DB::~DB()
{
	if (col)
	{
		for (int i = 0; i < col; i++)
			delete rows[i];
	}
}

void DB::add_rec(const char* a, char b, unsigned int c, float d)
{
	if (col >= 12)
		return;
	else col++;
	rows[col - 1] = new firms(a, b, c, d);
	sorted = 0;
}

void DB::del_rec()
{
	if (col <= 0)
		return;
	delete rows[col - 1];
	col--;
}

void DB::sort_DB()
{
	char* s1;
	char* s2;
	if (col < 2)
		return;
	firms* temp;

	for (int i = 0; i < col; i++)
	{
		for (int j = i + 1; j < col; j++)
		{
			s1 = rows[i]->ret_name();
			s2 = rows[j]->ret_name();
			if (strcmp(s1, s2) > 0)
			{
				temp = rows[i];
				rows[i] = rows[j];
				rows[j] = temp;
			}
		}
	}
	sorted = 1;
}

void shapka()
{
	cout << "_______________________________________________________________\n";
	cout << "|                    Фирмы-производители СКБД                 |\n";
	cout << "|-------------------------------------------------------------|\n";
	cout << "|   Фирма  | Продуктов |     Обьем продаж    | Часть рынка(%) |\n";
	cout << "|-------------------------------------------------------------|\n";
}

void linebuild()
{
	cout << "\n|-------------------------------------------------------------|\n";
}

ostream& operator<<(ostream& stream, DB& o1)
{
	stream << o1.title << endl;
	if (o1.sorted == 0)
		stream << "Таблица не отсортирована.\n";
	else
		stream << "Таблица отсортирована.\n";
	shapka();
	if (!o1.col)
		stream << "Таблица пуста.";
	else
	{
		for (int i = 0; i < o1.col; i++)
			stream << *o1.rows[i];
	}
	return stream;
}

ostream& operator<<(ostream& stream, firms& o1)
{
	stream << "|" << setw(8) << o1.name << "  |  ";
	stream << setw(8) << o1.kolvprod << "|";
	stream << setw(18) << o1.count << "    |";
	stream << setw(16) << o1.square << "|";
	linebuild();
	return stream;
}

firms::firms()
	: count(0), square(0)
{

}

firms::firms(const char* a, char b, unsigned int c, float d)
	: kolvprod(b), count(c), square(d)
{
	name = new char[strlen(a) + 1];
	strcpy(name, a);
}

void firms::set(const char* a, char b, unsigned int c, float d)
{
	strcpy(name, a);
	kolvprod = b;
	count = c;
	square = d;
}

void firms::show()
{
	cout << name << " ";
	cout << kolvprod << " ";
	cout << count << " ";
	cout << square << " ";
}

void firms::get(char* a, char b, unsigned int c, float d)
{
	strcpy(a, name);
	b = kolvprod;
	c = count;
	d = square;
}

char* firms::ret_name()
{
	return name;
}