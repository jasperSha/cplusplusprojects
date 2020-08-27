#include <iostream>
using namespace std;

int bin2Dec(const string& binaryString) {
    int len = binaryString.length();

    int bin_arr[len + 1];
    for (int i = 0; i < len; i++)
        bin_arr[i] = binaryString[i];


    int binSum, temp;
    for (int i = len; i > 0; i--) {
        binSum = binSum * 2 + 


    return binSum;

}

int main() {

    string binString;
    cout << "enter the binary string: " << endl;
    cin >> binString;

    for (int i = 0; i < binString.length(); i++)
        cout << binString[i] << endl;
    return 0;

}































