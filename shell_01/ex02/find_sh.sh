#!/bin/bash
find -name "*.sh" | sed -r 's/^.+\///' | sed -r 's/\.sh//'
