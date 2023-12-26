#include<iostream>
#include<string>
using namespace std;

void triangleOfStars(int n) {
string str ="*";

for (int i =0; i<n; i++){
    cout << str << endl;
    str+="*";
}
}

int main () {
    triangleOfStars(5);
    return 0;
}