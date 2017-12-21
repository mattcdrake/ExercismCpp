#include <string>
#include <stdlib.h>
#include <boost\date_time\posix_time\posix_time.hpp>

using namespace std;
using namespace boost::posix_time;

namespace gigasecond {
    ptime advance(string s) {
        ptime curr = time_from_string(s);
        time_duration add{ 0, 0, 1000000000 };

        return curr + add;
//        return to_simple_string(curr);
    }
}