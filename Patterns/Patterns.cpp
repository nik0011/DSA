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
    // for (int i = 1; i <= n; i++){
    //     int c=i;
    //     for (int j = 1; j <= i; j++){
    //         cout << c;
    //         c++;
    //     }
    //     cout << endl;
    // }

    //second  methode
    // for (int i = 1; i <= n; i++){
    //     for (int j = i; j <2*i ; j++){
    //         cout << j;        
    //     }
    //     cout << endl;
    // }

    //for1,21,321,4321
    // for (int i = 1; i <= n; i++){
    //     for (int j = 1; j <= i; j++){
    //         cout << i - j + 1;
    //     }
    //     cout << endl;
    // }

    // for aaa,bbb,ccc
    // char ch = 'A';
    // for (int i = 1; i <= n; i++){
    //     for (int j = 1; j <= n; j++){
    //         cout << ch;
    //     }
    //     ch++;
    //     cout << endl;
    // }
        
    //for abc,bcd,def
    // for (int i = 1; i <= n; i++){
    //     for (int j = 1; j <= n; j++){
    //         char ch = 'A' + j + i-2;
    //         cout << ch;         
    //     }
    //     cout << endl;
    // }
       
    //for d,cc,bbb,aaaa
    // for (int i = 1; i <= n; i++){
    //     for (int j = 1; j <= i; j++){
    //         char ch = 'A' + n - i;
    //         cout << ch;
    //     }
    //     cout << endl;
    // }

        // for d,cd,bcd,abcd
        //  for (int i = 1; i <= n; i++){
        //      char ch = 'A' + n - i;
        //      for (int j = 1; j <= i; j++){
        //         cout << ch;
        //        ch++;
        //     }
        //     cout << endl;
        // }
        
    //Now we will be solving * pattern
    // for printing spaces we need one extra while loop or else we just need two loop with proper formula.....
    // 1. for (int i = 1; i <= n; i++){
    //     int s = n - i;
    //     while(s ){
    //         cout << " ";
    //         s--;
    //     }
    //     for (int j = 1; j <= i; j++){
    //         cout << "*";
    //     }
    //     cout<<endl;
    // }

    //2.
    // for (int i = 1; i <= n; i++){
    //     for (int j = 1; j <= n-i+1; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    //   
    
    //3.
    // for (int i = 1; i <= n; i++){
    //     int s = i - 1;
    //     while(s){
    //         cout << ' ';
    //         s--;
    //     }
    //     for (int j = 1; j <= n-i+1; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
        
    //for 1111, 222, 33, 4
    // for (int i = 1; i <= n; i++){
    //     int s = i - 1;
    //     while(s){
    //         cout << " ";
    //         s--;
    //     }
    //     for (int j = 1; j <= n - i + 1; j++){
    //         cout << i;
    //     }
    //     cout << endl;
    // }


    // for (int i = 1; i <= n; i++){
    //     int s = n - i;
    //     while(s){
    //         cout << " ";
    //         s--;
    //     }
    //     for (int j = 1; j <= i; j++){
    //         cout << i;
    //     }
    //     cout << endl;
    // }
        
    // for (int i = 1; i <= n; i++){
    //     int s = i - 1;
    //     while(s){
    //         cout << " ";
    //         s--;
    //     }
    //     int c = i;
    //     for (int j = 1; j <= n - i + 1; j++){       
    //         cout << c;
    //         c++;
    //     }
    //     cout << endl;
    // }    
     
    //  int c = 1;  
    //  for (int i = 1; i <= n; i++){
    //     int s = n- i;
    //     while(s){
    //         cout << " ";
    //         s--;
    //     }       
    //     for (int j = 1; j <= i; j++){       
    //         cout << c;
    //         c++;
    //     }
    //     cout << endl;
    // }   

      
    //  for (int i = 1; i <= n; i++){
    //     int s = n- i;
    //     while(s){
    //         cout << " ";
    //         s--;
    //     } int c = 1;       
    //     for (int j = 1; j <= i; j++){       
    //         cout << c;
    //         c++;
    //     }
    //     for (int k = 1; k <= i - 1; k++){
    //         int val = i - k;
    //         cout << val;
    //         val--;
    //     }
    //         cout << endl;
    // }  

    //Last pattern
    // for (int i = 1; i <=n; i++){
    //     for (int j = 1; j <= n - i + 1; j++){
    //         cout << j;
    //     }
    //     for (int k = 1; k <= i - 1; k++){
    //         cout << "*";
    //     }
    //     for (int l = 1; l <= i - 1;l++){
    //         cout << "*";
    //     }
    //     for (int m =  n - i + 1; m >=1; m--){
    //         cout << m;
    //     }
    //         cout << endl;
    // }

    int a = 1;
    int b = a++;
    int c = ++a;
    cout << b;
    cout << c;
    return 0;
}