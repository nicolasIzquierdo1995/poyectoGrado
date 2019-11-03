// Header file:
#pragma once
#include <string>

using namespace std;
namespace inputOutput
{
  class InputOutput {
      public:
      typedef struct Arguments {
          //H5File file;
          bool multiThreading;
          int compressionLevel;
          bool isOk;
          string errorMessage;
      } Arguments;
      static Arguments ProcessArguments(int argc, char *argv[]);
  };
}
