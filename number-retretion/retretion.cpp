// for retreving a digit form a number .......
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int p = 1;
    int s = 0;
    while(n!=0){
        int d = n % 10;
        p = p * d;
        s = s + d;
        n = n / 10;
    }
    int ans = p - s;
    cout << ans;
    return 0;
}


// for reversing a number
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int reverse;
//     while(n!=0){
//         int d = n % 10;
//         reverse = reverse * 10 + d;
//         n = n / 10;
//     }
//     cout << reverse;

//     return 0;
// }






 // for caclulating no of 1 digit in a binary number
