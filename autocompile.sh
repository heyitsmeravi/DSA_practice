#!/bin/bash
# Monitor 'myprogram.c' for close_write events and compile & run when changes are detected.
while inotifywait -e close_write arrayPrac.c; do
    gcc arrayPrac.c -o myprogram && ./myprogram
done

