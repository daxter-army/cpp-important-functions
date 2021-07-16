#include<iostream>
#include<ctime>

using namespace std;

int main() {
    clock_t start_time = (float)clock();

    for(int i = 1; i <= 30000; i++ ) {
        cout << i << " ";
    }

    cout << endl;

    clock_t end_time = (float)clock();
    cout << "Running time: " << (float)(end_time - start_time)/1000 << " seconds" << endl;
    return 0;
}