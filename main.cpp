#include <iostream>
#include <string>

using namespace std;

class Printer {
  string _name;
  int _availablePaper;
public:
  Printer() = default;
  Printer(string name, int paper) {
    _name = name;
    _availablePaper = paper;
  }
  void Print(string txtDoc) {

    int requiredPaper = txtDoc.length()/10; // 40/10 = 4

    if(requiredPaper>_availablePaper)
    {
      throw "No paper available.";
    }

    cout << "Printing..." << txtDoc << endl;
    _availablePaper -= requiredPaper;
  }
};

int main()
{
  Printer myPrinter("HP Desktop1234", 10);
  try
  {
    myPrinter.Print("Hello, my name is Alexander. I'm a Software Engineer");
    myPrinter.Print("Hello, my name is Alexander. I'm a Software Engineer");
    myPrinter.Print("Hello, my name is Alexander. I'm a Software Engineer");
    myPrinter.Print("Hello, my name is Alexander. I'm a Software Engineer");
  }
  catch (const char* txtException)
  {
    cout << "Exception: " << txtException << endl;
  }
  return 0;
}
