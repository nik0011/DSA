// for printing *patteren for equal no of rows and column...
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++){
//         for (int j = 0; j < n; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//         return 0;
// }

//for 111
// 222
// 333
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for (int i = 1; i<=n; i++){
//         for (int j = 1; j <=n; j++){
//             cout << i;
//         }
//         cout << endl;
//     }
//         return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    
    // for printing 1234 and same in the second row...
    // for (int i = 1; i <= n; i++){
    //     for (int j=1; j <=n; j++){
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    // for printing 123
    //456
    //789
    // int c = 1;
    // for (int i = 1; i <= n;i++){
    //     for (int j = 1; j <= n;j++){
    //         cout << c;
    //         c++;
    //     }
    //     cout << endl;
    // }

    //for printing a star pattern in a triangle way
    // for (int i = 1; i <= n; i++){
    //     for (int j = 1; j <= i; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
        
    // for printing 1,22,333,4444
    // int c = 1;
    // for (int i = 1; i <= n; i++){
    //     for (int j = 1; j <= i; j++){
    //         cout << c;
           
    //     }
    //      c++;
    //     cout << endl;
    // }

    //for 1,23,345,4567
    
    for (int i = 1; i <= n; i++){
        int c=i;
        for (int j = 1; j <= i; j++){
            cout << c;
            c++;
        }
        cout << endl;
    }
        return 0;
}