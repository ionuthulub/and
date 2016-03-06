# include <iostream>
using namespace std;

int main()
{
	bool changes_found;
	int i, j, n;
	int *v;

	cout << "Introduceti dimensiunea vectorului: ";
	cin >> n;

	v = (int*)malloc(n * sizeof(int));

	cout << "Introduceti elementele vectorului: ";
	for (i = 0; i < n; i++)
	{
		cout << "v[" << i << "] = ";
		cin >> v[i];
	}
	
	changes_found = 1;

	while (changes_found)
	{ 
		changes_found = 0;
		for (i = 0; i < n - 1; i++)
		{
			if (v[i + 1] < v[i])
			{
				v[i + 1] += v[i];
				v[i] = v[i + 1] - v[i];
				v[i + 1] -= v[i];
				changes_found = 1;
			}

		}
	}
	for (i = 0; i < n; i++)
	{
		cout << v[i] << endl;
	}
	return 0;
}