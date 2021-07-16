#include<iostream>
#include<ctime>

using namespace std;

int main() {
    // start time
    clock_t start_time = (float)clock();

    // stress function
    for(int i = 1; i <= 30000; i++ ) {
        cout << i << " ";
    }

    cout << endl;

    // end time
    clock_t end_time = (float)clock();
    
    // total run time
    cout << "Running time: " << (float)(end_time - start_time)/1000 << " seconds" << endl;
    return 0;
}