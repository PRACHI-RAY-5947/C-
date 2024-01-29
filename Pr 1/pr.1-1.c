#include <iostream>
using namespace std;

struct Distance {
    int feet;
    float inch;
}d1 , d2, sum;

int main() {
    cout << "Enter distances" << endl;
    cout << "Enter feet: ";
    cin >> d1.feet;
    cout << "Enter inch: ";
    cin >> d1.inch;

    

    sum = d1.feet+d1.inch;

    cout << endl << "Sum of distances = " << sum << " feet  " << sum <<" inches";
}
