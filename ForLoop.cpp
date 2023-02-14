#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b;
    std::vector<std::string> words = {"zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "even", "odd"};
    scanf("%d\n%d", &a, &b);
    for(int i = a; i <= b; i++){
        if(i > 9) {
            if(i%2 == 0) cout << words[10 + i%2] << endl;
            else cout << words[10 + i%2] << endl;
        } 
        else{
            cout << words[i] << endl;
        }
    }
    return 0;
}
