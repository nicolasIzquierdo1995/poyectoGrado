#include "../headers/inputOutput.h"

bool VerifyArguments(int argc, char *argv[]){
    if (argc != 2){
      return false;
    }
    const char* multiThreading = argv[1];
    const char* compressionLevel = argv[2];

    if (multiThreading != "true" && multiThreading != "false") {
      return false;
    }

    if (compressionLevel != "1" && compressionLevel != "2"){
      return false;
    }

    return true;
}


Arguments CreateErrorArgument(){
    InputOutput::Arguments arg;
    InputOutput::Arguments * parg;
    parg = &arg;
    parg->isOk = false;
    parg->errorMessage = "Error en argumentos";
    return arg;
}

Arguments ProcessArguments(int argc, char *argv[]){
    if (!VerifyArguments(argc,argv)){
        return CreateErrorArgument();
    }

    InputOutput::Arguments arg;
    InputOutput::Arguments * parg;
    parg = &arg;
    parg->multiThreading = argv[1] == "true";
    parg->errorMessage = (int)argv[2];
    return arg;
}
