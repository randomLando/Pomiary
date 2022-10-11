#include <iostream>
using namespace std;


int main() {
    int licznik = 0; 

    int g, g_count; 

    cin >> g; 
    g_count = g; 

    while (g != -1) {
        cin >> g;
        if (g > g_count)
        {
            licznik++;

            g_count = g; 
        }
    }

    cout << licznik << endl;
}