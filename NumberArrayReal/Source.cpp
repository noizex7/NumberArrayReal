#include"NumberArray.h"
int main()
{
    const int SIZE = 20;
    NumberArray numbers(SIZE);
    int val, x, n;

    cout << "Enter he quantity of elements: ";
    cin >> n;
    for (x = 0; x < n; x++)
    {
        cout << "Value #" << x << ":";
        cin >> val;
        numbers.setElement(x, val);

    }
    cout << endl;
    for (x = 0; x < n; x++)
    {
        cout << numbers.getElement(x) << " ";
    }
    cout << endl;
    NumberArray num2 = numbers;
    for (x = 0; x < n; x++)
    {
        cout << num2.getElement(x) << " ";
    }
    cout << endl;
    num2.displayData();
}