#include <iostream>
using namespace std;

class Complex {
    private:
        int real;
        int imag;
    
    public:
        Complex(int , int ) ;
        void display();
        Complex add(Complex c);
      
};
Complex::Complex(int r, int i)
        {  
            real = r;
            imag = i;
        }
void  Complex::display() 
        {
            cout << real << " + " << imag << "i" << endl;
        }
Complex::Complex add(Complex c)
        {
            Complex res;
            res.real = real + c.real;
            res.imag = imag + c.imag;
            return res;
        }

int main() {
    Complex a(3, 4);
    Complex b(2, -5);
    
    cout << "c1 = ";
    a.display();
    cout << "c2 = ";
    b.display();
    
    Complex res = a.add(b);
    cout << "res = ";
    res.display();
    
    return 0;
}
