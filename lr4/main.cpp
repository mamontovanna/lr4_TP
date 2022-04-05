#include<iostream>
#include"massiv.h"
#include"List.h"
using namespace std;

int main()
{	setlocale(LC_ALL, "rus");
	/*int data;
	int i;
	List<int> lst;
	cout << "Введите данные" << endl;
	for ( i = 0; i < 5; i++)
	{
		cin >> data;
		lst + data;
	}
	cout << "Количество элементов списка " << endl;
	cout << lst.GetSize() << endl;
	cout << "Список:" << endl;
	for (i = 0; i < lst.GetSize(); i++)
	{
		cout << lst[i] << "\t";
	}*/
	int size_array;
	int* mas1 = 0;//указатель на массив типа int
	int key1;
	int index1=0;
	float index2=0;
	double index3=0;
	float key2;
	double key3;
	float* mas2 = 0;//указатель
	double* mas3 = 0;
	int choice;//№ задания
	int choice_type;//№ типа данных для работы
	int choice_list;
	int choice_list_act;
	int op;
	int flag = 1;
	int i;
	int data1;//данные для добавления
	float data2;
	double data3;
	char data4;
	List<int>lst1;
	List<int>lst2;
	List<float>lst12;
	List<float>lst22;
	List<double>lst13;
	List<double>lst23;
	List<char>lst14;
	List<char>lst24;
	cout << "Выберете номер задания" << endl;
	cout << "1 - Задаие №1 - Бинарный поиск" << endl;
	cout << "2 - Задание №2 - Односвязный список" << endl;
	cout << "0 - Выход" << endl;
	cin >> choice;
	system("cls");
	switch (choice)
	{
	case 1:
		while (flag == 1)
		{
			cout << "Выберете тип данных для работы с массивом>>" << endl;
			cout << "С каким типом данных будем работать?" << endl;
			cout << "1 - int" << endl;
			cout << "2 - float" << endl;
			cout << "3 - double" << endl;
			cin >> choice_type;
			switch (choice_type)
			{

			case 1:
				srand(time(NULL));
				size_array = 3 + rand() % 15; // размер массива
				mas1 = new int[size_array]; //выделяем память под массив размером с задданный рандомом
				srand(time(NULL));
				for (i = 0; i < size_array; i++)
				{
					mas1[i] = rand()%50;
				}
				cout << "Исходный массив:" << endl;
				for (i = 0; i < size_array; i++)
				{
					cout << mas1[i] << "\t";
				}
				cout << "\n";
				//сортировка 
				BubbleSort(mas1, size_array);
				cout << "Отсортированный массив:" << endl;
				for (i = 0; i < size_array; i++)
				{
					cout << mas1[i] << "\t";
				}
				cout << "\n";
				//ФУНКЦИЯ БИНАРНОГО ПОИСКА,,,
				try 
				{
					cout << "Введите число для бинарного поиска >>" << endl;
					cin >> key1;
					index1=SearchBinary(mas1, 0, size_array, key1);
					if (index1 >= 0)
						cout << "Введенное число число находится в ячейке № " << index1 << endl;
					else
					{
						
						throw key1;
					}
				}
				catch (int key1)
				{
					cout << "В массиве нет числа " << key1 << "!" << endl;
					cout << "Исключение обработано" << endl;
				}
				
				delete[] mas1;
				system("pause");
				system("cls");
				break;
				//cout << "\n";


			case 2:

				srand(time(NULL));
				size_array = 3 + rand() % 15; // размер массива
				mas2 = new float[size_array];
				srand(time(NULL));
				for (i = 1; i < size_array; i++)
				{
					mas2[i] = (-60.0 + rand() % 119) / (2.0 + rand() % 2);
				}
				cout << "Исходный массив:" << endl;
				cout << "\n";
				for (i = 0; i < size_array; i++)
				{
					cout << mas2[i] << "\t";
				}
				BubbleSort(mas2, size_array);
				cout << "\n";
				cout << "Отсортированный массив:" << endl;
				for (i = 0; i < size_array; i++)
				{
					cout << mas2[i] << "\t";
				}
				cout << "\n";
				//ФУНКЦИЯ БИНАРНОГО ПОИСКА
				try {
					cout << "Введите число для бинарного поиска >>" << endl;
					cin >> key2;
					index1 = SearchBinary(mas2, 0, size_array, key2);
					if (index1 >= 0)
						cout << "Введенное число число находится в ячейке № " << index1 << endl;
					else
					{
						throw key2;
					}
				}
				catch (int key2)
				{
					cout << "В массиве нет числа " << key2 << "!" << endl;
					cout << "Исключение обработано" << endl;
				}
				delete[] mas2;
				system("pause");
				system("cls");
				break;

			case 3:
				srand(time(NULL));
				size_array = 3 + rand() % 15; // размер массива
				mas3 = new double[size_array];
				srand(time(NULL));
				for (i = 1; i < size_array; i++)
				{
					mas3[i] = (-60.0 + rand() % 119) / (2.0 + rand() % 2); ;
				}
				cout << "Исходный массив:" << endl;
				cout << "\n";
				for (i = 0; i < size_array; i++)
				{
					cout <<mas3[i] << "\t";
				}
				BubbleSort(mas3, size_array);
				cout << "\n";
				cout << "Отсортированный массив:" << endl;
				for (i = 0; i < size_array; i++)
				{
					cout << mas3[i] << "\t";
				}
				cout << "\n";
				//ФУНКЦИЯ БИНАРНОГО ПОИСКА
				try 
				{
					cout << "Введите число для бинарного поиска >>" << endl;
					cin >> key3;
					index1 = SearchBinary(mas3, 0, size_array, key3);
					if (index1 >= 0)
						cout << "Введенное число число находится в ячейке № " << index1 << endl;
					else
					{
						throw key3;
					}
				}
				catch (int key3)
				{
					cout << "В массиве нет числа " << key3 << "!" << endl;
					cout << "Исключение обработано" << endl;
				}
				delete[] mas3;
				system("pause");
				system("cls");
				break;
			}
		}
		break;
	case 2:
		system("cls");
		cout << "Выберете тип данных для работы с очередью>>" << endl;
		cout<<"1 - int" << endl;
		cout << "2 - float" << endl;
		cout << "3 - double" << endl;
		cout << "4 - char" << endl;
		cin >> choice_type;
		system("cls");
		while (flag == 1)
		{
			switch (choice_type)
			{
			case 1:
				
				cout << "Выберете нужный список:" << endl;
				cout << "1 - Список 1" << endl;
				cout << "2 - Список 2" << endl;
				cout << "0 - Выход" << endl;
				cin >> choice_list;
				switch (choice_list)
				{
				case 1:
					cout << "Вы работаете со списком №1!" << endl;
					cout << "Выберете действие>>" << endl;
					cout << "1 - Добавить элемент в начало списка" << endl;
					cout << "2 - Удалить элемент из начала списка" << endl;
					cout << "3 - Сравнить списки" << endl;
					cout << "4 - Вывести список на экран" << endl;
					cout << "0 - Выход" << endl;
					cin >> choice_list_act;
					switch (choice_list_act)
					{
					case 1:
						cout << "Введите элемент" << endl;
						cin >> data1;
						lst1 + data1;
						cout << "Элемент добавлен в список!" << endl;
						break;
					case 2:
						try
						{
							if (lst1.GetSize() == 0)
								throw - 1;
							else
							{
								lst1.pop_front();
								cout << "Элемент удален!" << endl;
							}
						}
						catch (int m)
						{
								cout << "Невозможно удалить элемент! Список пуст! " << endl;
								cout << "Исключение обработано" << endl;
						}
						
						break;
					case 3:
						cout << "Выберете операцию для сравнения" << endl;
						cout << "1 - >" << endl;
						cout << "2 - <" << endl;
						cin >> op;
						switch (op)
						{
						case 1:
							if (lst1 > lst2)
								cout << "Первый список больше второго списка" << endl;
							else
								cout << "Первый список не больше второго списка" << endl;
							break;
						case 2:
							if (lst1 < lst2)
								cout << "Первый список меньше второго списка" << endl;
							else
								cout << "Первый список не меньше второго списка" << endl;
							break;
						}
						break;
					case 4:
						try
						{
							if (lst1.GetSize() == 0)
								throw - 1;
						}
						catch (int m)
						{
							cout << "Список пуст!" << endl;
							cout << "Исключение обработано!" << "(" << m << ")" << endl;
						}
						for (i = 0; i < lst1.GetSize(); i++)
						{
							cout << lst1[i] << "\t";
						}
						cout << "\n";
						break;
					case 0:
						flag = 0;
						break;
					}
					break;
				case 2:
					cout << "Вы работаете со списком №2!" << endl;
					cout << "Выберете действие >>" << endl;
					cout << "1 - Добавить элемент в начало списка" << endl;
					cout << "2 - Удалить элемент из начала списка" << endl;
					cout << "3 - Сравнить списки" << endl;
					cout << "4 - Вывести список на экран" << endl;
					cout << "0 - Выход" << endl;
					cin >> choice_list_act;
					switch (choice_list_act)
					{
					case 1:
						cout << "Введите элемент" << endl;
						cin >> data1;
						lst2 + data1;
						cout << "Элемент добавлен в список!" << endl;
						break;
					case 2:
						try
						{
							if (lst2.GetSize() == 0)
								throw - 1;
							else
							{
								lst2.pop_front();
								cout << "Элемент удален!" << endl;
							}
						}
						catch (int m)
						{
							cout << "Невозможно удалить элемент! Список пуст! " << endl;
							cout << "Исключение обработано" << endl;
						}
						break;
					case 3:
						cout << "Выберете операцию для сравнения" << endl;
						cout << "1 - >" << endl;
						cout << "2 - <" << endl;
						cin >> op;
						switch (op)
						{
						case 1:
							if (lst2 > lst1)
								cout << "Второй список больше первого списка" << endl;
							else
								cout << "Второй список не больше первого списка" << endl;
							break;
						case 2:
							if (lst2 < lst1)
								cout << "Второй список меньше первого списка" << endl;
							else
								cout << "Второй список не меньше первого списка" << endl;
							break;
						}
						break;
					case 4:
						try
						{
							if (lst2.GetSize() == 0)
								throw - 1;
						}
						catch (int m)
						{
							cout << "Список пуст!" << endl;
							cout << "Исключение обработано!" << "(" << m << ")" << endl;
						}
						for (i = 0; i < lst2.GetSize(); i++)
						{
							cout << lst2[i] << "\t";
						}
						cout << "\n";
						break;
					case 0:
						flag = 0;
						break;
					}
				}
				break;
             case 2:
				 cout << "Выберете нужный список:" << endl;
				 cout << "1 - Список 1" << endl;
				 cout << "2 - Список 2" << endl;
				 cout << "0 - Выход" << endl;
				 cin >> choice_list;
				 switch (choice_list)
				 {
				 case 1:
					 cout << "Вы работаете со списком №1!" << endl;
					 cout << "Выберете действие>>" << endl;
					 cout << "1 - Добавить элемент в начало списка" << endl;
					 cout << "2 - Удалить элемент из начала списка" << endl;
					 cout << "3 - Сравнить списки" << endl;
					 cout << "4 - Вывести список на экран" << endl;
					 cout << "0 - Выход" << endl;
					 cin >> choice_list_act;
					 switch (choice_list_act)
					 {
					 case 1:
						 cout << "Введите элемент" << endl;
						 cin >> data2;
						 lst12 + data2;
						 cout << "Элемент добавлен в список!" << endl;
						 break;
					 case 2:
						 try
						 {
							 if (lst12.GetSize() == 0)
								 throw - 1;
							 else
							 {
								 lst12.pop_front();
								 cout << "Элемент удален!" << endl;
							 }
						 }
						 catch (int m)
						 {
							 cout << "Невозможно удалить элемент! Список пуст! " << endl;
							 cout << "Исключение обработано" << endl;
						 }
						 break;
					 case 3:
						 cout << "Выберете операцию для сравнения" << endl;
						 cout << "1 - >" << endl;
						 cout << "2 - <" << endl;
						 cin >> op;
						 switch (op)
						 {
						 case 1:
							 if (lst12 > lst22)
								 cout << "Первый список больше второго списка" << endl;
							 else
								 cout << "Первый список не больше второго списка" << endl;
							 break;
						 case 2:
							 if (lst12 < lst22)
								 cout << "Первый список меньше второго списка" << endl;
							 else
								 cout << "Первый список не меньше второго списка" << endl;
							 break;
						 }
						 break;
					 case 4:
						 try
						 {
							 if (lst12.GetSize() == 0)
								 throw - 1;
						 }
						 catch (int m)
						 {
							 cout << "Список пуст!" << endl;
							 cout << "Исключение обработано!" << "(" << m << ")" << endl;
						 }
						 for (i = 0; i < lst12.GetSize(); i++)
						 {
							 cout << lst12[i] << "\t";
						 }
						 cout << "\n";
						 break;
					 case 0:
						 flag = 0;
						 break;
					 }
					 break;
				 case 2:
					 cout << "Вы работаете со списком №2!" << endl;
					 cout << "Выберете действие >>" << endl;
					 cout << "1 - Добавить элемент в начало списка" << endl;
					 cout << "2 - Удалить элемент из начала списка" << endl;
					 cout << "3 - Сравнить списки" << endl;
					 cout << "4 - Вывести список на экран" << endl;
					 cout << "0 - Выход" << endl;
					 cin >> choice_list_act;
					 switch (choice_list_act)
					 {
					 case 1:
						 cout << "Введите элемент" << endl;
						 cin >> data2;
						 lst22 + data2;
						 cout << "Элемент добавлен в список!" << endl;
						 break;
					 case 2:
						 try
						 {
							 if (lst22.GetSize() == 0)
								 throw - 1;
							 else
							 {
								 lst22.pop_front();
								 cout << "Элемент удален!" << endl;
							 }
						 }
						 catch (int m)
						 {
							 cout << "Невозможно удалить элемент! Список пуст! " << endl;
							 cout << "Исключение обработано" << endl;
						 }
						 break;
					 case 3:
						 cout << "Выберете операцию для сравнения" << endl;
						 cout << "1 - >" << endl;
						 cout << "2 - <" << endl;
						 cin >> op;
						 switch (op)
						 {
						 case 1:
							 if (lst22 > lst12)
								 cout << "Второй список больше первого списка" << endl;
							 else
								 cout << "Второй список не больше первого списка" << endl;
							 break;
						 case 2:
							 if (lst22 < lst12)
								 cout << "Второй список меньше первого списка" << endl;
							 else
								 cout << "Второй список не меньше первого списка" << endl;
							 break;
						 }
						 break;
					 case 4:
						 try
						 {
							 if (lst22.GetSize() == 0)
								 throw - 1;
						 }
						 catch (int m)
						 {
							 cout << "Список пуст!" << endl;
							 cout << "Исключение обработано!" << "(" << m << ")" << endl;
						 }
						 for (i = 0; i < lst22.GetSize(); i++)
						 {
							 cout << lst22[i] << "\t";
						 }
						 cout << "\n";
						 break;
					 case 0:
						 flag = 0;
						 break;
					 }
				 }
			case 3:
				cout << "Выберете нужный список:" << endl;
				cout << "1 - Список 1" << endl;
				cout << "2 - Список 2" << endl;
				cout << "0 - Выход" << endl;
				cin >> choice_list;
				switch (choice_list)
				{
				case 1:
					cout << "Вы работаете со списком №1!" << endl;
					cout << "Выберете действие>>" << endl;
					cout << "1 - Добавить элемент в начало списка" << endl;
					cout << "2 - Удалить элемент из начала списка" << endl;
					cout << "3 - Сравнить списки" << endl;
					cout << "4 - Вывести список на экран" << endl;
					cout << "0 - Выход" << endl;
					cin >> choice_list_act;
					switch (choice_list_act)
					{
					case 1:
						cout << "Введите элемент" << endl;
						cin >> data3;
						lst13 + data3;
						cout << "Элемент добавлен в список!" << endl;
						break;
					case 2:
						try
						{
							if (lst13.GetSize() == 0)
								throw - 1;
							else
							{
								lst13.pop_front();
								cout << "Элемент удален!" << endl;
							}
						}
						catch (int m)
						{
							cout << "Невозможно удалить элемент! Список пуст! " << endl;
							cout << "Исключение обработано" << endl;
						}
						break;
					case 3:
						cout << "Выберете операцию для сравнения" << endl;
						cout << "1 - >" << endl;
						cout << "2 - <" << endl;
						cin >> op;
						switch (op)
						{
						case 1:
							if (lst13 > lst23)
								cout << "Первый список больше второго списка" << endl;
							else
								cout << "Первый список не больше второго списка" << endl;
							break;
						case 2:
							if (lst13 < lst23)
								cout << "Первый список меньше второго списка" << endl;
							else
								cout << "Первый список не меньше второго списка" << endl;
							break;
						}
						break;
					case 4:
						try
						{
							if (lst13.GetSize() == 0)
								throw - 1;
						}
						catch (int m)
						{
							cout << "Список пуст!" << endl;
							cout << "Исключение обработано!" << "(" << m << ")" << endl;
						}
						for (i = 0; i < lst13.GetSize(); i++)
						{
							cout << lst13[i] << "\t";
						}
						cout << "\n";
						break;
					case 0:
						flag = 0;
						break;
					}
					break;
				case 2:
					cout << "Вы работаете со списком №2!" << endl;
					cout << "Выберете действие >>" << endl;
					cout << "1 - Добавить элемент в начало списка" << endl;
					cout << "2 - Удалить элемент из начала списка" << endl;
					cout << "3 - Сравнить списки" << endl;
					cout << "4 - Вывести список на экран" << endl;
					cout << "0 - Выход" << endl;
					cin >> choice_list_act;
					switch (choice_list_act)
					{
					case 1:
						cout << "Введите элемент" << endl;
						cin >> data3;
						lst23 + data3;
						cout << "Элемент добавлен в список!" << endl;
						break;
					case 2:
						try
						{
							if (lst23.GetSize() == 0)
								throw - 1;
							else
							{
								lst23.pop_front();
								cout << "Элемент удален!" << endl;
							}
						}
						catch (int m)
						{
							cout << "Невозможно удалить элемент! Список пуст! " << endl;
							cout << "Исключение обработано" << endl;
						}
						break;
					case 3:
						cout << "Выберете операцию для сравнения" << endl;
						cout << "1 - >" << endl;
						cout << "2 - <" << endl;
						cin >> op;
						switch (op)
						{
						case 1:
							if (lst23 > lst13)
								cout << "Второй список больше первого списка" << endl;
							else
								cout << "Второй список не больше первого списка" << endl;
							break;
						case 2:
							if (lst23 < lst13)
								cout << "Второй список меньше первого списка" << endl;
							else
								cout << "Второй список не меньше первого списка" << endl;
							break;
						}
						break;
					case 4:
						try
						{
							if (lst23.GetSize() == 0)
								throw - 1;
						}
						catch (int m)
						{
							cout << "Список пуст!" << endl;
							cout << "Исключение обработано!" << "(" << m << ")" << endl;
						}
						for (i = 0; i < lst23.GetSize(); i++)
						{
							cout << lst23[i] << "\t";
						}
						cout << "\n";
						break;
					case 0:
						flag = 0;
						break;
					}
				}
				break;
			case 4:
				cout << "Выберете нужный список:" << endl;
				cout << "1 - Список 1" << endl;
				cout << "2 - Список 2" << endl;
				cout << "0 - Выход" << endl;
				cin >> choice_list;
				switch (choice_list)
				{
				case 1:
					cout << "Вы работаете со списком №1!" << endl;
					cout << "Выберете действие>>" << endl;
					cout << "1 - Добавить элемент в начало списка" << endl;
					cout << "2 - Удалить элемент из начала списка" << endl;
					cout << "3 - Сравнить списки" << endl;
					cout << "4 - Вывести список на экран" << endl;
					cout << "0 - Выход" << endl;
					cin >> choice_list_act;
					switch (choice_list_act)
					{
					case 1:
						cout << "Введите элемент" << endl;
						cin >> data4;
						lst14 + data4;
						cout << "Элемент добавлен в список!" << endl;
						break;
					case 2:
						try
						{
							if (lst14.GetSize() == 0)
								throw - 1;
							else
							{
								lst14.pop_front();
								cout << "Элемент удален!" << endl;
							}
						}
						catch (int m)
						{
							cout << "Невозможно удалить элемент! Список пуст! " << endl;
							cout << "Исключение обработано" << endl;
						}
						break;
					case 3:
						cout << "Выберете операцию для сравнения" << endl;
						cout << "1 - >" << endl;
						cout << "2 - <" << endl;
						cin >> op;
						switch (op)
						{
						case 1:
							if (lst14 > lst24)
								cout << "Первый список больше второго списка" << endl;
							else
								cout << "Первый список не больше второго списка" << endl;
							break;
						case 2:
							if (lst14 < lst24)
								cout << "Первый список меньше второго списка" << endl;
							else
								cout << "Первый список не меньше второго списка" << endl;
							break;
						}
						break;
					case 4:
						try
						{
							if (lst14.GetSize() == 0)
								throw - 1;
						}
						catch (int m)
						{
							cout << "Список пуст!" << endl;
							cout << "Исключение обработано!" << "(" << m << ")" << endl;
						}
						for (i = 0; i < lst14.GetSize(); i++)
						{
							cout << lst14[i] << "\t";
						}
						cout << "\n";
						break;
					case 0:
						flag = 0;
						break;
					}
					break;
				case 2:
					cout << "Вы работаете со списком №2!" << endl;
					cout << "Выберете действие >>" << endl;
					cout << "1 - Добавить элемент в начало списка" << endl;
					cout << "2 - Удалить элемент из начала списка" << endl;
					cout << "3 - Сравнить списки" << endl;
					cout << "4 - Вывести список на экран" << endl;
					cout << "0 - Выход" << endl;
					cin >> choice_list_act;
					switch (choice_list_act)
					{
					case 1:
						cout << "Введите элемент" << endl;
						cin >> data4;
						lst24+ data4;
						cout << "Элемент добавлен в список!" << endl;
						break;
					case 2:
						try
						{
							if (lst24.GetSize() == 0)
								throw - 1;
							else
							{
								lst24.pop_front();
								cout << "Элемент удален!" << endl;
							}
						}
						catch (int m)
						{
							cout << "Невозможно удалить элемент! Список пуст! " << endl;
							cout << "Исключение обработано" << endl;
						}
						break;
					case 3:
						cout << "Выберете операцию для сравнения" << endl;
						cout << "1 - >" << endl;
						cout << "2 - <" << endl;
						cin >> op;
						switch (op)
						{
						case 1:
							if (lst24 > lst14)
								cout << "Второй список больше первого списка" << endl;
							else
								cout << "Второй список не больше первого списка" << endl;
							break;
						case 2:
							if (lst24 < lst14)
								cout << "Второй список меньше первого списка" << endl;
							else
								cout << "Второй список не меньше первого списка" << endl;
							break;
						}
						break;
					case 4:
						try
						{
							if (lst24.GetSize() == 0)
								throw - 1;
						}
						catch (int m)
						{
							cout << "Список пуст!" << endl;
							cout << "Исключение обработано!" << "(" << m << ")" << endl;
						}
						for (i = 0; i < lst24.GetSize(); i++)
						{
							cout << lst24[i] << "\t";
						}
						cout << "\n";
					break;
					case 0:
						flag = 0;
						break;
					}
				}
				break;
			}

		}
	}
}