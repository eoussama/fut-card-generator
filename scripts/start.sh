#!/bin/bash

source .env

tag=$GLOBAL_VERSION
project="eoussama"
username="fut-card-generator"
image="$username/$project:$tag"

docker build -f ./docker/Dockerfile.dev -t $image .
docker run -it --rm \
  -v "$(pwd)":/fut-card-generator \
  $image