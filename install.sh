#!/bin/bash

cd core/src
make
cp HmanCoder.out ../../
cd ../..
cd gui/HmanCoder
mvn package
cp target/HmanCoder-0.0.1-SNAPSHOT.jar ../../
