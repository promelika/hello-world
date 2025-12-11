#include <iostream>
using namespace std;

int main()
{
    int a, b, c;  
    
    cout << "Vendos gjatesine e brinjes a: ";
    cin >> a;
    
    cout << "Vendos gjatesine e brinjes b: ";
    cin >> b;
    
    cout << "Vendos gjatesine e brinjes c: ";
    cin >> c;
    
    int perimetri = a + b + c;
    
    cout << "Perimetri i trekendeshit eshte: " << perimetri << endl;
    
    return 0;
}
