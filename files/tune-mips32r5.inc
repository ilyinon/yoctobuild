DEFAULTTUNE ?= "mips32r5"

require conf/machine/include/tune-mips32.inc

TUNEVALID[mips32r5] = "Enable mips32r5 specific processor optimizations"
TUNECONFLICTS[mips32r5] = "n64 n32"
TUNE_CCARGS .= "${@bb.utils.contains("TUNE_FEATURES", "mips32r5", " -march=mips32r5", "", d)}"

AVAILTUNES += "mips32r5 mips32r5el"

TUNE_FEATURES_tune-mips32r5 = "${TUNE_FEATURES_tune-mips} mips32r5"
MIPSPKGSFX_VARIANT_tune-mips32r5 = "mips32r5"
PACKAGE_EXTRA_ARCHS_tune-mips32r5 = "mips mips32 mips32r5"

TUNE_FEATURES_tune-mips32r5el = "${TUNE_FEATURES_tune-mipsel} mips32r5"
MIPSPKGSFX_VARIANT_tune-mips32r5el = "mips32r5el"
PACKAGE_EXTRA_ARCHS_tune-mips32r5el = "mipsel mips32el mips32r5el"
