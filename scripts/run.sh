#!/bin/bash

source .env

tag=$GLOBAL_VERSION
project="fut-card-generator"
username="eoussama"
image="$username/$project:$tag-prod"

docker build -f ./docker/Dockerfile -t $image .
docker run -it --rm \
  -v "$(pwd)":/fut-card-generator \
  $image "$@"