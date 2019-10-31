// Header file:
class InputOutput {
    typedef struct Arguments {
       //H5File file;
       bool multiThreading;
       int compressionLevel;
    } Arguments;

public:
    Arguments ProcessArguments();
};