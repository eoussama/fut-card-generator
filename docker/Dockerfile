FROM ubuntu:24.04
WORKDIR /fut-card-generator

RUN apt update
RUN apt install -y bash build-essential cmake libopencv-dev libcurl4-openssl-dev

COPY . .
CMD ["bash"]