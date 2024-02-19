// for intitializing array with 1 default value
// #include <iostream>
// using namespace std;
// int main() {
//     int size = 5;
//     int defaultValue = 5;
//     int myArray[size];
//     for (int i = 0; i < size; i++) {
//         myArray[i] = defaultValue;
//         cout << myArray[i] << " ";
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int printarray(int arr[],int size){
    for (int i = 0; i < size;i++){
        cout << arr[i] << " ";
    }
   
    return 0;
}
int main() {
    int firstarr[10] = {1, 2};
    int size = 10;
    int arraysize = sizeof(firstarr) / sizeof(int);
    cout << arraysize;
    printarray(firstarr, size);
    
    return 0;
}