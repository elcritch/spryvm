const StatHasNanoseconds = false
type Sighandler = proc (a: cint) {.noconv.}

include posix_other

import spryvmtest
import sprycoretest
import sprymathtest
import sprystringtest
import spryblocktest
import spryootest
import spryreflecttest
import spryextendtest
