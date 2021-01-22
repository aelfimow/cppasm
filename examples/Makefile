all:
	$(error Specify: windows or linux)

windows:
	${MAKE} -C clflush windows
	${MAKE} -C cpuid
	${MAKE} -C fpuconst
	${MAKE} -C lea-arithm
	${MAKE} -C macheps
	${MAKE} -C rc4
	${MAKE} -C rdtsc
	${MAKE} -C thousand-nops windows
	${MAKE} -C xorshift-rng windows
	${MAKE} -C isbn-10
	${MAKE} -C isbn-13
	${MAKE} -C collatz
	@echo "No errors"

linux:
	${MAKE} -C clflush linux
	${MAKE} -C xorshift-rng linux
	${MAKE} -C thousand-nops linux
	@echo "No errors"
