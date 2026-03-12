#include <iostream>
#include <iomanip>   
using namespace std;
 
int main() {
    
    double p = 3.14159;
    double r;
    double a;
    
    cin >> r;
    
    a = p * (r*r);
    
    cout << fixed << setprecision(4);
    cout << "A=" << a << endl;
    
    return 0;
}
