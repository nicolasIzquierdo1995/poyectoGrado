#include "../headers/inputOutput.h"
#include <iostream>

using namespace inputOutput;
using namespace std;

int main (int argc, char *argv[])
{
  InputOutput io;
  Arguments args = io.ProcessArguments(argc, argv);
  //Runner executor = new runner();
  //if(!args.isOk){
  //  cout<< args.errorMessage << endl;
  //  return 0;
  //}
  //Runner::Results res =  runner.processFile(args.File,args.compressionLevel);
  //cout<<"Compression finished"<<endl;
  //cout<<"Resulted in " + res.comp + "% compressions"<<endl;
  return 0;
}
