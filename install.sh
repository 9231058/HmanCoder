#!/usr/bin/env bash

# https://stackoverflow.com/questions/3822621/how-to-exit-if-a-command-failed
set -eu
set -o pipefail

cd core/src || exit 1
make
cp HmanCoder.out ../../
cd ../.. || exit 1
cd gui/HmanCoder || exit 1
mvn package
cp target/HmanCoder-0.0.1-SNAPSHOT.jar ../../
