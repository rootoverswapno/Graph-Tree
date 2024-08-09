#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int N = 10; // Size of the array
    vector<int> v[N]; // Array of vectors

    // Adding elements to some of the vectors
    v[0].push_back(1);
    v[0].push_back(2);
    v[1].push_back(3);
    v[2].push_back(4);
    v[2].push_back(5);
    v[2].push_back(6);

    // Printing elements of the vectors
    // for (int i = 0; i < N; ++i) {
    //     cout << "Vector " << i << ": ";
    //     for (int j = 0; j < v[i].size(); ++j) {
    //         cout << v[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    for(int i=0;i<N;++i)
    {
        cout<<"Vector is"<<i<<" : ";
        for(int j=0;j<v[i].size();++j)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
