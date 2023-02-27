#include <string_view>

class IErrorLog {
   public:
    virtual bool openLog(std::string_view filename) = 0;
    virtual bool closeLog() = 0;
    virtual bool writeError(std::string_view errorMessage) = 0;
    virtual ~IErrorLog() {}
};