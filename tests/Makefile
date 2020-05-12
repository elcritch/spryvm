run:
	./run.sh

		# --gen_script \

all: clean
	nim c -d:debug \
		--gc:arc \
		--nim_cache:_nimcache \
		-d:traceArc \
		-d:use_malloc \
		--stackTrace:on \
		--lineTrace:on \
		--debugger:native \
		-r \
		all.nim

all_embedded: clean
	# Run all tests
	nim cpp \
		-d:debug \
		--os:any \
		--gc:arc \
		-d:posix \
		-d:use_malloc \
		--passC:"-fpermissive " \
		--exceptions:cpp \
		--debugger:native \
		--dead_code_elim:on \
		--threads:on \
		--tls_emulation:off \
		--verbosity:3 \
		--multimethods:on \
		-d:spryMathNoRandom \
		--stackTrace:on \
		--lineTrace:on \
		-d:no_signal_handler \
		all_embedded.nim

clean:
	rm -Rf all.dSYM all all_embedded all_embedded.dSYM

