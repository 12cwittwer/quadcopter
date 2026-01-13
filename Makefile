run:
	meson compile -C build
	./build/src/quadcopter_sim

test:
	meson test -C build
