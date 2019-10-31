#include <iostream>
#include "inputOutput.hpp"

using namespace std;
int main (int argc, char *argv[])
{
  InputOutput::Arguments args = InputOutput.ProcessArguments(argc, argv);
  Runner executor = new runner();
  if(!args.IsOK){
    cout<<"Argumentos erroneos"<<endl;
    cout<<"El formato correcto es: f5grado filePath compressionLevel multiThreading"<<endl;
    return 0;
  }
  Runner::Results res =  runner.processFile(args.File,args.compressionLevel);
  cout<<"Compression finished"<<endl;
  cout<<"Resulted in " + res.comp + "% compressions"<<endl;
  return 0;
}
