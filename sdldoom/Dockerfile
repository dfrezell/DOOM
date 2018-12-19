FROM ubuntu:cosmic

MAINTAINER Drew Frezell <dfrezell@gmail.com>

VOLUME /code

RUN apt-get update
RUN apt-get -y install build-essential gcc-multilib

WORKDIR /code
ENV SHELL /bin/bash

CMD ["make"]

# docker commands:
#
# docker build --rm -f Dockerfile -t sdldoombuild .
# docker run -v"$(pwd)":/code --rm -i -t sdldoombuild