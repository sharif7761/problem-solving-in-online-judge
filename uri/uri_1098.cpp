#include <iostream>

using namespace std;
 
int main() {
    for(float i = 0; i <= 2.1; i += 0.2) {
        for(float j = 1; j <= 3; j++){
            cout << "I=" << i << " J="<< j + i << endl;    
        }
    }
    return 0;
}