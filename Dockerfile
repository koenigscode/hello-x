FROM alpine

RUN apk add gcc libc-dev

COPY main.c /main.c

RUN gcc main.c -o main
RUN chmod +x main

ENTRYPOINT ["./main"]
