#include "Fraction.h"
#include <iostream>

using namespace std;

int main(){
    Fraction fraction_1;
    Fraction fraction_2;
    Fraction fraction_3;
    Fraction fraction_4;
    Queue<Fraction> Q;
    int reducer;
    char input;
    bool flag = true;
    Greeting();
    input = DisplayCalculator();
    while(flag){
        switch(input){
            case '1':
                fraction_1.readin();
                fraction_2.readin();
                fraction_3 = fraction_1 + fraction_2;
                reducer = GCD(fraction_3.getNum(), fraction_3.getDen());
                fraction_4 = fraction_3.reduce(reducer);
                printf("\n");
                fraction_1.print();
                printf(" + ");
                fraction_2.print();
                printf(" = ");
                fraction_4.print();
                printf("\n\n");
                Q.enqueue(fraction_4);
                input = DisplayCalculator();
                break;

            case '2':
                fraction_1.readin();
                fraction_2.readin();
                fraction_3 = fraction_1 - fraction_2;
                reducer = GCD(fraction_3.getNum(), fraction_3.getDen());
                fraction_4 = fraction_3.reduce(reducer);
                printf("\n");
                fraction_1.print();
                printf(" - ");
                fraction_2.print();
                printf(" = ");
                fraction_4.print();
                printf("\n\n");
                Q.enqueue(fraction_4);
                input = DisplayCalculator();
                break;
            
            case '3':
                fraction_1.readin();
                fraction_2.readin();
                fraction_3 = fraction_1 * fraction_2;
                reducer = GCD(fraction_3.getNum(), fraction_3.getDen());
                fraction_4 = fraction_3.reduce(reducer);
                printf("\n");
                fraction_1.print();
                printf(" * ");
                fraction_2.print();
                printf(" = ");
                fraction_4.print();
                printf("\n\n");
                Q.enqueue(fraction_4);
                input = DisplayCalculator();
                break;

            case '4':
                fraction_1.readin();
                fraction_2.readin();
                fraction_3 = fraction_1 / fraction_2;
                reducer = GCD(fraction_3.getNum(), fraction_3.getDen());
                fraction_4 = fraction_3.reduce(reducer);
                printf("\n");
                fraction_1.print();
                printf(" / ");
                fraction_2.print();
                printf(" = ");
                fraction_4.print();
                printf("\n\n");
                Q.enqueue(fraction_4);
                input = DisplayCalculator();
                break;
            
            case '5':

                cout << "\nThank you for using the Fraction Calculator" << endl;
                cout << "-----------------" << endl;
                cout << "Here is the Queue" << endl;
                cout << "-----------------" << endl;
                flag = false;
            
        }

        
    }

    

    while(Q.getSize() > 0){
        Q.peek();
        cout << " Size of Queue: " << Q.getSize() << endl;
        Q.dequeue();
        
    }
    if(Q.getSize() == 0){
        cout << "Queue is empty, good job!" << endl;
    }

    

    
    return 0;
}
