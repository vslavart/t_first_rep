#include <iostream>

using namespace std;
// buble sort
void buble_sort(int *b, int n)
{   
    int m,v,p;
    for (int i = 0; i < n-1; i++)
    {
        m = b[i];
        p = i;
        for (int j = i+1; j < n; j++)
            {
                if (m > b[j])
                {
                    m = b[j];
                    p = j;
                }
            }
        v = b[i];
        b[i] = m;
        b[p] = v;

    }
}

int iarray_input(int *b)
{
    int n;
    cin >> n;
    int *b = new int [n];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    return n;
}

int main()
{
    int n;
    int *b;
    
    n = iarray_input(b);

    buble_sort(b, n);
    for (int i = 0; i < n; i++)
        cout << b[i] << " ";

    if( !(b is null) ) delete b;

}