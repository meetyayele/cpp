#include <iostream>
using namespace std;

int main() {
int time = 10;
if (time < 5){
cout << "Good Morning";
}else if (time > 20){
cout << "Good Evening";
} else {
cout << "Good Afternoon";
}
return 0;
}
/* another way of writing if else statements is by the shorthand/ ternary operator:
#include <iostream>
#include <string>
using namespace std;

int main() {
  int time = 20;
  string result = (time < 18) ? "Good day." : "Good evening.";
  cout << result;
  return 0;
} */
