// my code
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter your n: ";
    cin >> n;
    
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
        cout << i << " \n";
    }
    cout << sum << endl;
    cout << endl;

    return 0;
}

// course code
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter your n : ";
    cin >> n;
    
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    cout <<"sum " << sum << endl;

    return 0;
}