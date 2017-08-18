all:
	@echo "Specify: windows or linux"

windows:
	${MAKE} -C clflush
	${MAKE} -C cpuid
	${MAKE} -C fpuconst
	${MAKE} -C rdtsc
	${MAKE} -C thousand-nops
	${MAKE} -C xorshift-rng windows
	@echo "No errors"

linux:
	${MAKE} -C clflush
	${MAKE} -C cpuid
	${MAKE} -C fpuconst
	${MAKE} -C rdtsc
	${MAKE} -C thousand-nops
	${MAKE} -C xorshift-rng linux
	@echo "No errors"
