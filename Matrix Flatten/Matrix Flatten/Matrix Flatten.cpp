#include <iostream>
#include <vector>

using namespace std;

int main()
{
    
    // Declaration of 3D Matrix Size
    int n, m, p;
    // Take Matrix Size from the User
    cout << "Enter Matrix Size n, m, p (For Example: 2 3 2)" << endl;
    cin >> n >> m >> p;
    // Declaration of 3D Matrix Size and 1D Vector 
    vector<vector<vector<int>>> Matrix(n, vector<vector<int>>(m, vector<int>(p, 0)));
    int vector_size = n * m * p;
    vector<int> vector(vector_size);
    // Take Matrix Elements From User
    cout << "Enter Matrix Elements" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            for (int k = 0; k < p; ++k) {
                cin >> Matrix[i][j][k];
            }
        }
    }
    cout << endl;
    // Convert 3D Matrix To 1D Vector
    //Flat[x + WIDTH * (y + DEPTH * z)] = Original[x, y, z]
    int position;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            for (int k = 0; k < p; ++k) {
                position = i + n * (j + m * k);
                vector[position] = Matrix[i][j][k];
            }
        }
    }
    cout << "1D Vector Elements Are:" << endl;
    for (auto x : vector) 
    {
        cout << x  << '\n';
    }

}

