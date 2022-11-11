#include <iostream>
using namespace std;

int main()
{
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n;
    int j = 0;

    cin >> n;

    int b=n;
    bool c = false;

    cout<< 1<< ' ';

    for (int i = 2; i <= n; i++) {
        j = 0;
        // cout<< 'a';
        while(b >= (n / 2) + 1 && j < 2) {
            cout << b<< ' ';
            j++;
            b--;
        }
        j = 0;
        c= false;
        while(i <= (n / 2)  && j < 2) {
            cout << i<< ' ';
            j++;
            i++;
            c = true;
           
        }
        if (c) {
            i--;
        }
    }

    return 0;
}