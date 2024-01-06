#include <iostream>

using namespace std;

int main()
{
    float tab[3] = {1.3, 4.5, 6.7};
    int i = 0;
    float sum = 0;
    while (i < 3)
    {
        sum += tab[i];
        i++;
    }
    cout << sum;

    return 0;
}