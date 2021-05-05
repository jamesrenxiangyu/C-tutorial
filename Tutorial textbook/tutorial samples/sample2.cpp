# include<iostream>

using namespace std;

int main()
{
    int n, m;
    cout << "input number of rows(n) and gap(m): " << endl;
    cin >> n >> m;

for (int i = 1; i <= n; i++) {
		int j1 = 2 * i - 1;
		int b1 = 4*n - 2 + m;
		for (b1; b1 > 0; b1--)
		{
			cout << " ";
		}
		for (int a = 1; a <= j1; a++)
		{
			cout << "*";
		}

		cout << endl;
	}
    return 0;


}
