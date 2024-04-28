#include <string>
#include <iostream>
#include <memory>

using namespace std;
    string message[] = { "Enter first comparator: ",
                         "Enter second comparator: ",
                         "How high you wanna get?" };
    string result = "";
    int comp[3], buzzCount=0, fizzCount=0, fbCount=0;

int main(){
    for (int i = 0; i < 3; ++i)
    {
        cout << message[i] << endl;
        cin >> comp[i];
        cout << endl;
    }
    for (int i = 1; i<=comp[2]; i++)
        {
            if ((i % comp[0] == 0) && (i % comp[1] == 0))
            {
                result += "FizzBuzz\n";
                fbCount++;
            }
            else if (i % comp[0] == 0)
            {
                result += "Fizz\n";
                fizzCount++;
            }
            else if (i % comp[1] == 0)
            {
                result += "Buzz\n";
                buzzCount++;
            }
            else result += to_string(i) + "\n";
        }
    cout << result << endl;
    cout << "Total number of Fizz: " << fizzCount << endl;
    cout << "Total number of Buzz: " << buzzCount << endl;
    cout << "Total number of FizzBuzz: " << fbCount << endl;
    cout << "fizzCount address: " << addressof(fizzCount) << endl;
    cout << "buzzCount address: " << addressof(buzzCount) << endl;
    cout << "fbCount address: " << addressof(fbCount) << endl;
}

