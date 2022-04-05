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
				// ����� �������
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

			if (key < arr[midd])       // ���� ������� ������ �������� � ������
				right = midd - 1;      // ������� ������ ������� ������
			else if (key > arr[midd])  // ���� ������� ������ �������� � ������
				left = midd + 1;    // ������� ����� ������� ������
			else                       // ����� (�������� �����)
				return midd;           // ������� ���������� ������ ������

			if (left > right)          // ���� ������� ���������� 
				return -1;

		}
	}
	


