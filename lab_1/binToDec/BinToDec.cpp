#include <iostream>
using namespace std;

int bin2Dec(const string& binaryString) {
    int len = binaryString.size();

    int binArr[len];
    for (int i = 0; i < len; i++) {
        binArr[i] = int(binaryString[i] - '0');
    }

    int binSum = 0;
    int temp = 1;
    for (int i = len - 1; i >= 0; i--) {
        binSum += binArr[i] * temp;
        temp *= 2;
    }



    return binSum;

}

int main() {

    string binString;
    cout << "Enter the binary string: " << endl;
    cin >> binString;
    int binSum = bin2Dec(binString);
    cout << "The decimal conversion is: " << binSum << endl;

    getchar();
    return 0;

}































