#include "webbench.h"

int main(int argc, char *argv[])
{
    ParseArg(argc, argv);
    BuildRequest(argv[optind]);
    WebBench();
    return 0;
}
