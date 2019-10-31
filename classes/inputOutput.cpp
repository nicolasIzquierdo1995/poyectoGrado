#include <inputOutput.hpp>


InputOutput::Arguments InputOutput::ProcessArguments(int argc, char *argv[]){
    if (!VerifyArguments(argc,argv)){
        return CreateErrorArgument();
    }

    

}

bool VerifyArguments(int argc, char *argv[]){
    return true;
}

InputOutput::Arguments CreateErrorArgument(){
    InputOutput::Arguments arg;
    InputOutput::Arguments * parg;
    parg = &arg;
    parg->isOk = false;
    parg->errorMesage = "Error en argumentos";
    return arg;
}


