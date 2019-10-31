#include <iostream>
#include "inputOutput.h"

using namespace std;
int main (int argc, char *argv[])
{
  InputOutput::Arguments args = InputOutput::ProcessArguments(argc, argv);
  Runner executor = new runner();
  if(!args.isOK){
    cout<< args.errorMessage << endl;
    return 0;
  }
  Runner::Results res =  runner.processFile(args.File,args.compressionLevel);
  cout<<"Compression finished"<<endl;
  cout<<"Resulted in " + res.comp + "% compressions"<<endl;
  return 0;
}
