#!/bin/bash

source .env

tag=$GLOBAL_VERSION
project="eoussama"
username="fut-card-generator"
image="$username/$project:$tag"

docker build -f ./docker/Dockerfile -t $image .
docker run -it --rm \
  -v "$(pwd)/src":/fut-card-generator/src \
  -v "$(pwd)/.env":/fut-card-generator/.env \
  -v "$(pwd)/build":/fut-card-generator/build \
  -v "$(pwd)/assets":/fut-card-generator/assets \
  -v "$(pwd)/include":/fut-card-generator/include \
  -v "$(pwd)/scripts":/fut-card-generator/scripts \
  $image