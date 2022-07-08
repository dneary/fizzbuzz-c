FROM alpine:latest AS builder

WORKDIR /build/
# Install C compiler and Make
RUN apk --no-cache add build-base

COPY fizzbuzz.c Makefile ./
RUN make clean && make all

FROM alpine:latest AS app
WORKDIR /root/

# Add our executable from the builder container
COPY --from=builder /build/fizzbuzz ./
ENTRYPOINT ["./fizzbuzz"]

