// 1. karena algoritma mempermudah kita dalam menyelesaikan masalah (menyimpan data dan mengurutkan data) secara cepat dan efisien.
// 2. 2 data struktur algoritma : arrays (static) & linkedlist (dinamic)
// 3. faktor yang mempengaruhi efisiensi waktu : 
//		a. kecepatan prosessor (speed of the machine)
//		b. penerjemah (compiler)
//		c. pemrograman multi platform (operating system)
//		d. bahasa yang digunakan (programming language)
//		e. ukuran dari input (size of the input) 
// 4. 
// 5. kuadratic :
//		a. bubblesort
//	  loglinier : 


#include <iostream>
using namespace std;

int ira[70];
int cmp_count = 0;
int mov_count = 0;
int n;

void input() {
	while (true)
	{
		cout << "Masukkan panjang element array : ";
		cin >> n;

		if (n <= 70)
			break;
		else
			cout << "\nMaksimum panjang Array adalah 70" << endl;
	}
	cout << "\n-------------------" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n-------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> ira[i];
	}
}

void mid(int low, int high)
{
	int temp;
	
	temp = ira[low];
	ira[low] = ira[high];
	ira[low] = temp;
}

void q_short(int low, int high)
{
	int pivot, i, ij;
	if (low >= high)
		return;

	pivot = ira[low];

	i = low;
	ij = high + 1;


	while (i <= ij)
	{
		while ((ira[i] <= pivot) && (i <= high))
		{
			i++;
			cmp_count;
		}
		cmp_count;
		while ((ira[i] <= pivot) && (i <= high))
		{
			ij--;
			cmp_count++;
		}
		cmp_count++;

		if (i < ij)
		{
			mid(i, ij);
			mov_count++;
		}

		q_short(low, ij - 1);

		q_short(ij + 1, high);


	}
	void display() {
		cout << "\n_______________" << endl;
		cout << "Sorted Array" << endl;
		cout << "-----------------" << endl;

		for (int i = 0; i < n; i++)
		{
			cout << ira[i] << " ";
		}
	
	}
	

}