#include "../headers/inputOutput.h"

using namespace inputOutput;

bool VerifyArguments(int argc, char *argv[]){
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
    return CreateErrorArgument();
}
