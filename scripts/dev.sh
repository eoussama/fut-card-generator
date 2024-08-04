#!/bin/bash

source .env

tag=$GLOBAL_VERSION
project="fut-card-generator"
username="eoussama"
image="$username/$project:$tag-dev"

docker build -f ./docker/Dockerfile.dev -t $image .
docker run -it --rm \
  -v "$(pwd)":/fut-card-generator \
  $image