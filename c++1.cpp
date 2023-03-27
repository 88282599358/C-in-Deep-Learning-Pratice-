#include<iostream>
using namespace std;

int main()
{
    int dish;
    cout << "1.Daal Rice\n2.Veg Rice\n3.Gujrati Thali\n4.Rajasthani Thali\n5.South Indian Thali\n6.Maharashtrain Thali\n";
    cout << "Enter the Number of Dish Which you like to have:";
    cin >> dish;
    switch (dish){
    case 1:
        cout << "Congratulation!!\nYour order:Daal Rice";
        break;
    case 2:
        cout << "Congratulation!!\nYour order:Veg Rice";
        break;
    case 3:
        cout << "Congratulation!!\nYour order:Gujrati Thali";
        break;
    case 4:
        cout << "Congratulation!!\nYour order:Rajasthani Thali";
        break;

    case 5:
        cout << "Congratulation!!\nYour order:South Indian Thali";
        break;
    case 6:
        cout << "Congratulation!!\nYour order:Maharashtrain Thali";
        break;
    default:
        cout << "Sorry!! We didn't Serve the Item You ordered by Number";
    }


    return 0;
}

