#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("11428 - CubesINPUT.txt", "r" , stdin );
    //freopen("11428 - CubesOUTPUT.txt", "w" , stdout );

    int n;
    while( scanf("%d", &n) && n != 0 ){
            int x, y = INT_MAX;
            for(int i = 1; i < 60; i++){  //why 60??
                for(int j = 1; j < i; j++){
                    if( i * i * i - j * j * j == n && j < y ){
                        x = i;
                        y = j;
                }
            }
        }

        if( y == INT_MAX ) cout << "No solution\n";
        else cout << x << " " << y << endl;
    }



    return 0;
}
/*
Given  N (0 < N ≤ 10000).

and N = x^3 - y^3
    so, x^3 - y^3 = N where N is maximum 10000
        calculate x^3 - y^3, if both x&y are equal,then N is 0 which is not gonna happen,
        and if y > x,this will produce a negative value,thats also not gonna happen.
        so y must be less then x
        so,x > y
        do a bruteforce and check till where x^3 - y^3 <= 10000


*/
