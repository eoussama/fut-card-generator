FROM ubuntu:24.04
WORKDIR /fut-card-generator

RUN apt update && apt install -y bash build-essential cmake libopencv-dev libcurl4-openssl-dev

COPY . .
RUN ./scripts/build.sh
RUN ./scripts/install.sh

ENTRYPOINT ["./release/fut-card-generator"]