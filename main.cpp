#include <iostream>
using namespace std;


// Задание 1
/*int main()
{
 setlocale(0,"RUS");
 
 int num;
 
 cout << "Введите число: ";
 cin >> num;
 cout << "\n";
 
 int* px = &num;

 if (*px > 0) 
   cout << "Число положительное.";
 
 else if (*px < 0)
   cout << "Число отрицательное.";

 else if (*px == 0)
   cout << "Число равно нулю.";
}*/




// Задание 2
/*int main()
{
 setlocale(0,"RUS");
 
 int first_num;
 int second_num;
 int operation;
 
 cout << "Введите первое число:";
 cin >> first_num;
 cout << "\n";
 cout << "Введите второе число:";
 cin >> second_num;
 cout << "\n";
 
 int* px = &first_num;
 int* py = &second_num;

 cout << "Выберите операцию(введите цифру).\n1:+ 2:- 3:* 4:/\n";
 cin >> operation;
 cout << "\n";

 int* po = &operation;
 if (*po == 1) 
 {
   cout << *px + *py;
 }
 else if (*po == 2) 
 {
   cout << *px - *py;
 }
 else if (*po == 3) 
 {
   cout << *px * *py;
 }
 else if (*po == 4) 
 {
   cout << *px / *py;
 }
}*/




// Задание 3
/*int main()
{
 setlocale(0,"RUS");
 
 int first_num;
 int second_num;
 
 cout << "Введите первое число:";
 cin >> first_num;
 cout << "\n";
 cout << "Введите второе число:";
 cin >> second_num;
 cout << "\n";

 int* pt = &first_num; 
 int t = *pt;
 int* px = &second_num;
 int* py = &t;

 cout << *px << " " << *py;
}*/