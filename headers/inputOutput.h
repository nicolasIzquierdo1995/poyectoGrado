// Header file:
#include <string>
using namespace std;

namespace inputOutput{
  typedef struct Arguments {
    //H5File file;
    bool multiThreading;
    int compressionLevel;
    bool isOk;
    string errorMessage;
  } Arguments;

  class InputOutput {
    static Arguments ProcessArguments(int argc, char *argv[]);
  };
