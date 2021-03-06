#include "echo.h"

#include "mpic/option.h"

#ifdef _WIN32
#pragma comment(lib, "glog.lib")
#pragma comment(lib, "mpic_static.lib")
#pragma comment(lib, "Ws2_32.lib")
#endif

namespace echo {

bool EchoModule::InitInMaster(const mpic::Option* op) {
    option_ = op;
    return true;
}

int EchoModule::Run() {
    LOG(WARNING) << __FUNCTION__ << " running ...";
    for (;;) {
        LOG(WARNING) << __FUNCTION__ << " EchoModule pid=" << getpid() << " running ...";
        google::FlushLogFiles(0);
        sleep(1);
    }

    return 0;
}

}

EXPORT_MPIC_MODULE(echo::EchoModule, mpic::Resource);
