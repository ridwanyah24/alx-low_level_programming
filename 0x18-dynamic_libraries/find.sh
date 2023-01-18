#!/bin/bash
for p in check.txt
do
    find ../ -name p -exec cp {} ./
done
