#pragma once
template <class T>
void BubbleSort(T *array, int n) 
{
	for (int i = 1; i < n; ++i)
	{
		for (int r = 0; r < n - i; r++)
		{
			if (array[r] > array[r + 1])
			{
				// ќбмен местами
				T temp = array[r];
				array[r] = array[r + 1];
				array[r + 1] = temp;
			}
		}
	}
}


	template<class T>
	T  SearchBinary(T * arr, int left, int right, T key)
	{
		int midd = -1;
		while (1)
		{
			midd = (left + right) / 2;

			if (key < arr[midd])       // если искомое меньше значени€ в €чейке
				right = midd - 1;      // смещаем правую границу поиска
			else if (key > arr[midd])  // если искомое больше значени€ в €чейке
				left = midd + 1;    // смещаем левую границу поиска
			else                       // иначе (значени€ равны)
				return midd;           // функци€ возвращает индекс €чейки

			if (left > right)          // если границы сомкнулись 
				return -1;

		}
	}
	


