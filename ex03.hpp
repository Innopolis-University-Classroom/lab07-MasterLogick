#include <iostream>
#include <cmath>

template<typename T>
void method()
{
    T bill;
    T tiptotal;
    T total;
    T tip;

    std::cout<<"\n\nWelcome to tip Calculator\n";
    std::cout <<"------------------------------\n";
    std::cout << "Enter bill amount: "<<"$";
    std::cin>> bill;

    std::cout<< "Enter Tip: "<<"%";
    std::cin>> tip;

    if (tip<20)
    {
        std::cout<< "\n Oh you can give a better tip than that!\n";
        char ans;
        do
        {
            std::cout<< "Do you want to continue (Y/N)?\n";
            std::cout<< "You must type a 'Y' or an 'N'.\n";
            std::cin >> ans;
        }
        while((ans !='Y')&&(ans !='N')&&(ans !='y')&&(ans !='n'));
        return tip;
    }
    else
    {

        tiptotal = bill * (tip/100.);
        total = (tiptotal + bill);
        std::cout << "The total Bill with Tip is: "<<"$"<< total << "\n\n";
        std::cout << "You are helping me through College!! Thankyou!!\n";
    }
}

int main() {
    method<double>();
}
