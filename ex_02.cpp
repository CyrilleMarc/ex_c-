#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    float *tab = NULL;
    float sum = 0;
    int i = 0;

    tab = (float *)malloc(3 * sizeof(float));
    if (tab == NULL)
    {
        cout << "Allocation memory failed";
        return 1;
    }
    else
    {
        for (i = 0; i < 3; i++)
        {
            *(tab + i) = i + 3.3;
            sum += *(tab + i);
        }
    }

    cout << sum;
    free(tab);

    return 0;
}