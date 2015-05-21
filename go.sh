#!/bin/sh


(	cd build; \
	make BOARD_TYPE=db12x; \
)
ls -l IMAGES
