#!/bin/bash

rm -rf release
rm -rf fut-card-generator.tar.gz

mkdir release

cp -r assets/ release/assets/
cp build/fut-card-generator release/fut-card-generator

rm -rf release/fut-card-generator/assets/logo.png
rm -rf release/fut-card-generator/assets/nations/countries.json

tar -czvf fut-card-generator.tar.gz release/