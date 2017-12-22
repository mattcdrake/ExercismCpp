#include <string>
#include <stdlib.h>
#include <boost\date_time\posix_time\posix_time.hpp>

using namespace std;
using namespace boost::posix_time;

namespace gigasecond {
    ptime advance(string s) {
        return time_from_string(s) + seconds(1000000000);
    }
}