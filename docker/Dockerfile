FROM ubuntu:24.04
WORKDIR /fut-card-generator

RUN apt update && apt install -y bash build-essential cmake libopencv-dev libcurl4-openssl-dev

COPY . .
RUN cmake . && make

ENTRYPOINT ["./build/fut-card-generator"]
