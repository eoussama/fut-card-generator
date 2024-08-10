#!/bin/bash

source .env

tag=$GLOBAL_VERSION
project="fut-card-generator"
username="eoussama"
image="$username/$project:$tag-api"

docker build -f ./docker/Dockerfile.api -t $image .
docker run -it --rm -p 5000:5000 $image