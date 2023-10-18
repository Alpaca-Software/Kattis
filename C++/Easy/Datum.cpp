#include <iostream>
#include <string>

using namespace std;
int main() {
  int day;
  int mes;

  string dias[7] = {"Monday", "Tuesday",  "Wednesday", "Thursday",
                    "Friday", "Saturday", "Sunday"};
  int meses[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  cin >> day;
  cin >> mes;

  int r = 3;

  bool romper = false;

  for (int i = 0; i < 12; i++) {
    if (romper) {
      break;
    }
    for (int j = 0; j < meses[i]; j++) {
      if (j + 1 == day && i + 1 == mes) {
        romper = true;
        break;
      }

      r++;

      if (r == 7) {
        r = 0;
      }
    }
  }

  cout << dias[r];

  return 0;
}
