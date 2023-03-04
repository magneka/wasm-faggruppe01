# start by building the basic container
FROM ubuntu:latest

ENV PATH="${PATH}:/root/.wasmer/bin"

# add gfortran, debugging tools and make
RUN apt-get update && \
    apt-get install -y emscripten curl mc make git 
RUN apt-get -y install nodejs npm
#RUN apt-get install -y python3 python-pip python-dev-is-python3
RUN apt install -y apache2 apache2-utils
RUN curl https://get.wasmer.io -sSfL | sh
RUN curl https://wasmtime.dev/install.sh -sSf | bash

EXPOSE 2222
EXPOSE 80
EXPOSE 3000

WORKDIR /source/

#start apaced
#CMD ["apache2ctl", "-D, "FOREGROUND"]

