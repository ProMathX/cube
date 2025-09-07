#!/bin/bash

echo 'building file'

gcc -o bin/rotate src/main.c  $(sdl2-config --cflags --libs) -lm

echo 'executing binary'

exec bin/rotate

